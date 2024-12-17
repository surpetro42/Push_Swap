/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:22:45 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 12:58:32 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	butterfly(t_push_swap **stack_a, t_push_swap **stack_b)
{
	int	min;
	int	size;
	int	n;

	min = 0;
	n = offset(ft_list_size(*stack_a) - 1);
	while (*stack_a != NULL)
	{
		if ((*stack_a)->index <= min)
		{
			pb(stack_a, stack_b, 0);
			rb(stack_b, 0);
			min++;
		}
		else if ((*stack_a)->index <= min + n)
		{
			pb(stack_a, stack_b, 0);
			min++;
		}
		else
			ra(stack_a, 0);
	}
	sort_a(stack_a, stack_b);
}

void	sort_a(t_push_swap **stack_a, t_push_swap **stack_b)
{
	int	n;
	int	max;

	max = max_index(*stack_b);
	n = 0;
	while (*stack_b)
	{
		n = get_position(*stack_b, max);
		if (n < ft_list_size(*stack_b) / 2)
		{
			while (n-- > 0)
				rb(stack_b, 0);
			pa(stack_a, stack_b, 0);
			max--;
		}
		else
		{
			while (n++ < ft_list_size(*stack_b))
				rrb(stack_b, 0);
			pa(stack_a, stack_b, 0);
			max--;
		}
	}
}

int	offset(int size)
{
	int	root;
	int	log;
	int	step;

	log = 1;
	root = 1;
	step = 0;
	while (root * root <= size)
	{
		root++;
		step++;
	}
	while (log * 2 <= size)
	{
		log *= 2;
		step++;
	}
	return (step);
}

int	max_index(t_push_swap *stack)
{
	int	n;

	if (stack == NULL)
		return (0);
	n = stack->index;
	while (stack != NULL)
	{
		if (n < stack->index)
			n = stack->index;
		stack = stack->next;
	}
	return (n);
}

int	get_position(t_push_swap *stack, int max)
{
	int	i;

	i = 0;
	while (stack != NULL)
	{
		if (stack->index == max)
			return (i);
		stack = stack->next;
		i++;
	}
	return (i);
}
