/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 02:30:39 by lufelip2          #+#    #+#             */
/*   Updated: 2022/05/26 06:27:55 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	error_handler(int args);

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd != -1)
		{
			display_file(fd);
			return (0);
		}
		else
		{
			error_handler(-1);
			return (1);
		}
	}
	else
	{
		error_handler(argc);
		return (1);
	}
}

void	error_handler(int args)
{
	if (args == -1)
		ft_putstr(STDERR, NO_FILE);
	else if (args > 2)
		ft_putstr(STDERR, TOO_MANY_ARGUMENTS);
	else
		ft_putstr(STDERR, FILE_MISSING);
	ft_putchar(STDERR, '\n');
}
