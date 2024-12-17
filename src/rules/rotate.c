/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:58:26 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 12:58:00 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	rotate(t_push_swap **stack)
{
	t_push_swap	*last;
	t_push_swap	*buff;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	last = *stack;
	buff = *stack;
	while (last->next != NULL)
		last = last->next;
	last->next = *stack;
	*stack = (*stack)->next;
	buff->next = NULL;
}

void	ra(t_push_swap **stack_a, int x)
{
	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	rotate(stack_a);
	if (x != 1)
		write(1, "ra\n", 3);
}

void	rb(t_push_swap **stack_b, int x)
{
	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	rotate(stack_b);
	if (x != 1)
		write(1, "rb\n", 3);
}

void	rr(t_push_swap **stack_a, t_push_swap **stack_b, int x)
{
	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	else if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	rotate(stack_a);
	rotate(stack_b);
	if (x != 1)
		write(1, "rr\n", 3);
}
