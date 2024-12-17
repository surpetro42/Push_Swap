/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:47:34 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 13:12:56 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	packing(t_push_swap **stack_a, t_push_swap **stack_b,
			t_push_swap *first, t_push_swap *second)
{
	if (first)
		first->next = NULL;
	if (second)
		second->prev = NULL;
	if (ft_list_size(*stack_b) == 0)
	{
		*stack_b = first;
		*stack_a = second;
	}
	else
	{
		first->next = *stack_b;
		(*stack_b)->prev = first;
		*stack_a = second;
		*stack_b = first;
	}
}

static void	push(t_push_swap **stack_a, t_push_swap **stack_b)
{
	t_push_swap	*first;
	t_push_swap	*second;

	if (stack_a == NULL || *stack_a == NULL)
		return ;
	first = (*stack_a);
	second = (*stack_a)->next;
	if (ft_list_size(*stack_a) != 0)
	{
		packing(stack_a, stack_b, first, second);
	}
}

void	pa(t_push_swap **stack_a, t_push_swap **stack_b, int x)
{
	if (!*stack_b)
		return ;
	push(stack_b, stack_a);
	if (x != 1)
		write(1, "pa\n", 3);
}

void	pb(t_push_swap **stack_a, t_push_swap **stack_b, int x)
{
	if (!*stack_a)
		return ;
	push(stack_a, stack_b);
	if (x != 1)
		write(1, "pb\n", 3);
}
