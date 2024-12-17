/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:38:44 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 12:58:02 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	swap(t_push_swap *stack)
{
	int	tab;

	tab = stack->nbr;
	stack->nbr = stack->next->nbr;
	stack->next->nbr = tab;
	tab = stack->index;
	stack->index = stack->next->index;
	stack->next->index = tab;
}

void	sa(t_push_swap *stack, int x)
{
	if (!stack || !stack->next)
		return ;
	swap(stack);
	if (x != 1)
		write(1, "sa\n", 3);
}

void	sb(t_push_swap *stack, int x)
{
	if (!stack || !stack->next)
		return ;
	swap(stack);
	if (x != 1)
		write(1, "sa\n", 3);
}

void	ss(t_push_swap **stack_a, t_push_swap **stack_b, int x)
{
	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	else if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	swap(*stack_a);
	swap(*stack_b);
	if (x != 1)
		write(1, "sa\n", 3);
}
