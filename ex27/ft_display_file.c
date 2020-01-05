/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 15:18:30 by sael-you          #+#    #+#             */
/*   Updated: 2019/03/25 15:18:42 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *fn)
{
	int		file;
	char	c;

	file = open(fn, O_RDONLY);
	if (file < 0)
		return ;
	while (read(file, &c, 1))
		write(1, &c, 1);
	close(file);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display_file(argv[1]);
	return (0);
}
