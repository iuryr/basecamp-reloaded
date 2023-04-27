/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:53:57 by iusantos          #+#    #+#             */
/*   Updated: 2023/04/27 15:57:38 by iusantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "header.h"

int	main(int argc, char *argv[])
{
	int		fd;
	char	buf;

	if (argc == 1)
	{
		write(2, "File name missing.\n", 20);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 21);
		return (1);
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		while (read(fd, &buf, 1))
		{
			write(1, &buf, 1);
		}
		close(fd);
		return (0);
	}
}
