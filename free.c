/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 19:00:36 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 12:59:18 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_push_swap **stack_a, t_push_swap **stack_b)
{
	t_push_swap	*next_node;
	t_push_swap	*tmp;

	tmp = *stack_a;
	if ((stack_a != NULL && (*stack_a) != NULL))
	{
		while (tmp != NULL)
		{
			next_node = tmp->next;
			free(tmp);
			tmp = next_node;
		}
	}
	if ((stack_b != NULL) && ((*stack_b) != NULL))
	{
		tmp = *stack_b;
		while (tmp != NULL)
		{
			next_node = tmp->next;
			free(tmp);
			tmp = next_node;
		}
	}
}
