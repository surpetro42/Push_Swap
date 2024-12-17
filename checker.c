/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:32:17 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 22:06:45 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "checker_files/get_next_line/get_next_line.h"

void	checker(t_push_swap **stack_a, t_push_swap **stack_b)
{
	int			data_index;
	t_push_swap	*tmp;

	if ((stack_a == NULL && (*stack_a) == NULL)
		|| (stack_b != NULL && (*stack_b) != NULL))
	{
		ft_free(stack_a, stack_b);
		exit (write(2, "KO\n", 3));
	}
	data_index = (*stack_a)->index;
	tmp = (*stack_a);
	while (tmp)
	{
		if (data_index > tmp->index)
		{
			ft_free(stack_a, stack_b);
			exit(write(2, "KO\n", 3));
		}
		data_index = tmp->index;
		tmp = tmp->next;
	}
	ft_free(stack_a, stack_b);
	write(1, "OK\n", 3);
}

void	ft_loop_checher(char **s, t_push_swap **list_a, t_push_swap **list_b)
{
	int	l;

	l = 0;
	while (s[l])
		ft_list_add(list_a, ft_lst_new(ft_atoi(s[l++]), 0));
	ft_index(list_a);
	repetation_check(list_a);
}

char	**spl_str(char *s)
{
	char	**res;

	res = ft_split(s, ' ');
	if (ft_inspect_char(res, 0, 0) == 0)
	{
		free(s);
		exit (write(2, "Error\n", 6));
	}
	return (res);
}

void	ft_gnl_definition(t_push_swap **stack_a, t_push_swap **stack_b)
{
	char	*str;

	str = NULL;
	while (1)
	{
		str = get_next_line(0);
		if (!str)
			return ;
		defining(str, stack_a, stack_b);
		free(str);
		str = NULL;
	}
}

int	main(int argc, char **argv)
{
	t_push_swap	*stack_a;
	t_push_swap	*stack_b;
	char		*str;
	char		**s;
	int			i;

	if (argc > 1)
	{
		i = 0;
		while (argv[++i])
		{
			str = ft_strjoin(str, argv[i]);
			str = ft_strjoin(str, " ");
		}
		s = spl_str(str);
		if (!s)
			return (1);
		ft_loop_checher(s, &stack_a, &stack_b);
		ft_gnl_definition(&stack_a, &stack_b);
		checker(&stack_a, &stack_b);
		system("leaks checker");
	}
}
