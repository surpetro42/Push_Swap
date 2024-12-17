/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defining.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:40:00 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 21:54:07 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	defining(char *s, t_push_swap **stack_a, t_push_swap **stack_b)
{
	if (!ft_strcmp(s, "pa\n") || !ft_strcmp(s, "pb\n"))
		defining_push(s, stack_a, stack_b);
	else if (!ft_strcmp(s, "rra\n") || !ft_strcmp(s, "rrb\n")
		|| !ft_strcmp(s, "rrr\n"))
		defining_rr(s, stack_a, stack_b);
	else if (!ft_strcmp(s, "ra\n") || !ft_strcmp(s, "rb\n")
		|| !ft_strcmp(s, "rr\n"))
		defining_r(s, stack_a, stack_b);
	else if (!ft_strcmp(s, "sa\n") || !ft_strcmp(s, "sb\n")
		|| !ft_strcmp(s, "ss\n"))
		defining_swap(s, stack_a, stack_b);
	else
	{
		ft_free(stack_a, stack_b);
		exit (write(2, "Error\n", 6));
	}
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
