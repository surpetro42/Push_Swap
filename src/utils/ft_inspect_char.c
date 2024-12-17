/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inspect_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:41:02 by surpetro          #+#    #+#             */
/*   Updated: 2024/05/16 21:54:46 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_inspect(char *s, int x, int count, int i)
{
	while (s[i])
	{
		if (i == 0 && (s[i] == '-' || s[i] == '+'))
		{
			i++;
			if (s[i] >= '0' && s[i] <= '9')
				while (s[i] == '0')
					i++;
			count = 1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (s[i] != '0')
				x++;
			if (x > 12)
				exit (write(2, "Error\n", 6));
			count = 1;
		}
		else
			return (0);
		i++;
	}
	return (count);
}

int	ft_inspect_char(char **s, int i, int j)
{
	int	count;
	int	x;
	int	res;

	x = 0;
	count = 0;
	while (s[i])
	{
		j = 0;
		x = 0;
		res = ft_inspect(s[i], x, count, 0);
		if (res == 0)
			return (0);
		i++;
	}
	return (res);
}
