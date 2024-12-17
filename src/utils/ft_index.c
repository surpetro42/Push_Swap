/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:59:33 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 12:56:50 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_index(t_push_swap **list)
{
	t_push_swap	*cur;
	t_push_swap	*ptr;

	ptr = (*list);
	cur = (*list);
	while (cur)
	{
		ptr = (*list);
		while (ptr)
		{
			if (cur->nbr > ptr->nbr)
				cur->index += 1;
			ptr = ptr->next;
		}
		cur = cur->next;
	}
}
