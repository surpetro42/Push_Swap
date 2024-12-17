/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ascending.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:36:00 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 12:56:35 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ascending(t_push_swap **stack)
{
	t_push_swap	*tmp;

	tmp = *stack;
	while (tmp->next != NULL)
	{
		if (tmp->nbr < tmp->next->nbr)
			;
		else
			return ;
		tmp = tmp->next;
	}
	exit(0);
}
