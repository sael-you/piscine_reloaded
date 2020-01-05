/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 15:12:49 by sael-you          #+#    #+#             */
/*   Updated: 2019/03/25 15:14:42 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = -1;
	if (min >= max)
	{
		tab = 0;
		return (tab);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	min--;
	while (++min < max)
		tab[++i] = min;
	return (tab);
}
