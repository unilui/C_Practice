/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 23:52:14 by lufelip2          #+#    #+#             */
/*   Updated: 2022/05/22 23:44:12 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_params(int len, char **args);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_print_params(argc, argv);
	}
	else
		return (1);
	return (0);
}

void	ft_print_params(int len, char **args)
{
	int	i;
	int	x;

	i = 1;
	x = 0;
	while (i < len)
	{
		while (args[i][x])
		{
			ft_putchar(args[i][x]);
			x++;
		}
		ft_putchar('\n');
		x = 0;
		i++;
	}
}
