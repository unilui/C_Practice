/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:23:16 by lufelip2          #+#    #+#             */
/*   Updated: 2022/04/22 02:53:20 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putdgt(int dgt)
{
	char	c_dgt;

	c_dgt = dgt + '0';
	write(1, &c_dgt, 1);
}

int	ft_to_power(int nbr, int pwr)
{
	int	pwr_;
	int	result;

	result = 1;
	pwr_ = 0;
	while (pwr_ < pwr)
	{
		result *= nbr;
		pwr_++;
	}
	return (result);
}

int	ft_is_negative(int *nbr)
{
	if (*nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	if (*nbr < 0)
	{
		write(1, "-", 1);
		*nbr *= -1;
		return (0);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	int	i;
	int	pwr;
	int	dgt;

	i = 9;
	if (ft_is_negative(&nb))
		return ;
	while (i > 0)
	{
		pwr = ft_to_power(10, i);
		dgt = nb / pwr;
		if (dgt > 0)
		{
			ft_putdgt(dgt);
			nb -= (dgt * pwr);
		}
		i--;
	}
	dgt = nb % 10;
	ft_putdgt(dgt);
}
