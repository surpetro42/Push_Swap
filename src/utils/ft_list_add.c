/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:08:54 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 12:57:29 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_list_add(t_push_swap **list, t_push_swap *new)
{
	t_push_swap	*head;

	head = *list;
	if (*list == NULL)
		*list = new;
	else
	{
		while (head->next != NULL)
			head = head->next;
		head->next = new;
		new->prev = head;
	}
}

t_push_swap	*ft_lst_new(int nbr, int index)
{
	t_push_swap	*new_node;

	new_node = NULL;
	new_node = (t_push_swap *)malloc(sizeof(t_push_swap));
	if (!new_node)
		return (NULL);
	new_node->nbr = nbr;
	new_node->index = index;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}
