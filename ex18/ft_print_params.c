/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 14:58:17 by sael-you          #+#    #+#             */
/*   Updated: 2019/03/26 15:14:02 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	if (argc > 0)
	{
		while (++i < argc)
		{
			j = -1;
			while (argv[i][++j])
				ft_putchar(argv[i][j]);
			ft_putchar('\n');
		}
	}
	return (0);
}
