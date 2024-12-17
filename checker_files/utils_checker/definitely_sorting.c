/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   definitely_sorting.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:40:00 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 19:10:14 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	defining_push(char *s, t_push_swap **stack_a, t_push_swap **stack_b)
{
	if (!ft_strcmp(s, "pa\n"))
		pa(stack_a, stack_b, 1);
	else if (!ft_strcmp(s, "pb\n"))
		pb(stack_a, stack_b, 1);
}

void	defining_rr(char *s, t_push_swap **stack_a, t_push_swap **stack_b)
{
	if (!ft_strcmp(s, "rra\n"))
		rra(stack_a, 1);
	else if (!ft_strcmp(s, "rrb\n"))
		rrb(stack_b, 1);
	else if (!ft_strcmp(s, "rrr\n"))
		rrr(stack_a, stack_b, 1);
}

void	defining_r(char *s, t_push_swap **stack_a, t_push_swap **stack_b)
{
	if (!ft_strcmp(s, "ra\n"))
		ra(stack_a, 1);
	else if (!ft_strcmp(s, "rb\n"))
		rb(stack_b, 1);
	else if (!ft_strcmp(s, "rr\n"))
		rr(stack_a, stack_b, 1);
}

void	defining_swap(char *s, t_push_swap **stack_a, t_push_swap **stack_b)
{
	if (!ft_strcmp(s, "sa\n"))
		sa(*stack_a, 1);
	else if (!ft_strcmp(s, "sb\n"))
		sb(*stack_b, 1);
	else if (!ft_strcmp(s, "ss\n"))
		ss(stack_a, stack_b, 1);
}
