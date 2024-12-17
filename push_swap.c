/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:32:17 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 21:53:59 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			i;
	char		**s;
	char		*st;
	t_push_swap	*list_a;
	t_push_swap	*list_b;

	if (argc > 1)
	{
		i = 0;
		while (argv[++i])
		{
			st = ft_strjoin(st, argv[i]);
			st = ft_strjoin(st, " ");
		}
		s = ft_split(st, ' ');
		if (!s)
			return (1);
		if (ft_inspect_char(s, 0, 0) == 0)
		{
			free(s);
			exit (write(2, "Error\n", 6));
		}
		ft_loop(s, &list_a, &list_b);
	}
}

void	ft_loop(char **s, t_push_swap **list_a, t_push_swap **list_b)
{
	int	l;

	l = 0;
	while (s[l])
		ft_list_add(list_a, ft_lst_new(ft_atoi(s[l++]), 0));
	ft_index(list_a);
	ascending(list_a);
	repetation_check(list_a);
	if (ft_list_size(*list_a) <= 3)
	{
		sorting_three(list_a);
		exit(0);
	}
	else if (ft_list_size(*list_a) <= 5)
	{
		sorting_five(list_a, list_b);
		exit(0);
	}
	else
	{
		butterfly(list_a, list_b);
		exit(0);
	}
}
