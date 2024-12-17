/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:29:40 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 12:57:51 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sorting_three(t_push_swap **stack)
{
	if (ft_list_size(*stack) != 2)
	{
		if ((*stack)->index > (*stack)->next->index
			&& (*stack)->index > (*stack)->next->next->index)
			ra(stack, 0);
		else if ((*stack)->next->index > (*stack)->index
			&& (*stack)->next->index > (*stack)->next->next->index)
			rra(stack, 0);
	}
	if ((*stack)->index > (*stack)->next->index)
		sa(*stack, 0);
}

void	sorting_five(t_push_swap **stack_a, t_push_swap **stack_b)
{
	int			size;
	int			index;

	size = ft_list_size(*stack_a);
	index = 0;
	while (size > 3)
	{
		if ((*stack_a)->index == index)
		{
			pb(stack_a, stack_b, 0);
			index++;
			size--;
		}
		if (get_position(*stack_a, index) < (size / 2 + 1))
			ra(stack_a, 0);
		else if (get_position(*stack_a, index) >= (size / 2 + 1))
			rra(stack_a, 0);
	}
	sorting_three(stack_a);
	while (*stack_b)
		pa(stack_a, stack_b, 0);
}
