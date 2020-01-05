/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 14:50:12 by sael-you          #+#    #+#             */
/*   Updated: 2019/03/25 14:50:57 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int x;
	int factorial;

	x = nb;
	factorial = 1;
	if (nb >= 13 || nb < 0)
		return (0);
	while (x >= 1)
	{
		factorial = factorial * x;
		x--;
	}
	return (factorial);
}
