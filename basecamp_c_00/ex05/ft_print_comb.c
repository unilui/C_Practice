/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 03:05:11 by lufelip2          #+#    #+#             */
/*   Updated: 2022/04/20 00:03:50 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_result(int index[3])
{
	char	digit[3];

	digit[0] = index[2] + '0';
	digit[1] = index[1] + '0';
	digit[2] = index[0] + '0';
	if (digit[1] > digit[0] && digit[2] > digit[1])
	{
		write (1, &digit[0], 1);
		write (1, &digit[1], 1);
		write (1, &digit[2], 1);
		if ((digit[0] + digit[1] + digit[2]) < 168)
		{
			write (1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	int		index[3];

	index[0] = 0;
	index[1] = 0;
	index[2] = 0;
	while (index[2] <= 9)
	{
		if (index[0] == 9)
		{	
			index[1]++;
			index[0] = 0;
		}
		if (index[1] == 9)
		{
			index[2]++;
			index[1] = 0;
		}
		index[0]++;
		print_result(index);
	}
}
