/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 03:05:11 by lufelip2          #+#    #+#             */
/*   Updated: 2022/04/09 06:36:11 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_duo(int duo[2])
{
	char	digit[4];

	digit[0] = (duo[0] / 10) + '0';
	digit[1] = (duo[0] % 10) + '0';
	digit[2] = (duo[1] / 10) + '0';
	digit[3] = (duo[1] % 10) + '0';
	write (1, &digit[0], 1);
	write (1, &digit[1], 1);
	write (1, " ", 1);
	write (1, &digit[2], 1);
	write (1, &digit[3], 1);
}

void	ft_print_comb2(void)
{
	int		duo[2];

	duo[0] = 0;
	duo[1] = 0;
	while (duo[0] <= 99)
	{
		while (duo[1] <= 99)
		{
			if (duo[1] > duo[0])
			{
				print_duo(duo);
				if (duo[0] < 98)
					write (1, ", ", 2);
			}
			duo[1]++;
		}
		duo[1] = 0;
		duo[0]++;
	}
}
