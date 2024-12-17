/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 22:02:03 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 12:57:57 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	reverse_rotate(t_push_swap **stack)
{
	t_push_swap	*tmp;
	t_push_swap	*prev;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	prev = NULL;
	while (tmp->next != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	tmp->next = *stack;
	*stack = tmp;
	prev->next = NULL;
}

void	rra(t_push_swap **stack_a, int x)
{
	if (!stack_a || !(*stack_a))
		return ;
	reverse_rotate(stack_a);
	if (x != 1)
		write(1, "rra\n", 4);
}

void	rrb(t_push_swap **stack_b, int x)
{
	if (!stack_b || !(*stack_b))
		return ;
	reverse_rotate(stack_b);
	if (x != 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_push_swap **stack_a, t_push_swap **stack_b, int x)
{
	if (!*stack_a || !*stack_b || !(*stack_a)->next || !(*stack_b)->next)
		return ;
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	if (x != 1)
		write(1, "rrr\n", 4);
}
