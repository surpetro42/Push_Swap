/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repetation_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:23:12 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 21:54:40 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	repetation_check(t_push_swap **stack)
{
	t_push_swap	*tmp;
	t_push_swap	*runner;

	if (!stack || !(*stack))
		exit(write(2, "Error\n", 6));
	tmp = *stack;
	while (tmp)
	{
		runner = tmp->next;
		while (runner)
		{
			if (tmp->nbr == runner->nbr)
				exit(write(2, "Error\n", 6));
			runner = runner->next;
		}
		tmp = tmp->next;
	}
}
