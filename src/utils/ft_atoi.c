/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:52:25 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 21:54:19 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_atoi(char *str)
{
	int		nb;
	long	number;
	int		x;

	nb = 1;
	number = 0;
	x = 0;
	while (str[x] == ' ' || str[x] == '\f' || str[x] == '\n'
		|| str[x] == '\r' || str[x] == '\t' || str[x] == '\v')
		++x;
	if (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			nb *= -1;
		++x;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		number *= 10;
		number += str[x++] - '0';
	}
	ft_inspect_nbr(nb * number);
	if ((nb * number) > 2147483647 || (nb * number) < -2147483648)
		exit (write(2, "Error\n", 6));
	return (nb * number);
}
