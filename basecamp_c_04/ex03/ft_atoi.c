/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 21:30:04 by lufelip2          #+#    #+#             */
/*   Updated: 2022/04/22 02:54:03 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_valid(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c == '+' || c == '-')
		return (1);
	else if (c >= '\t' && c <= '\r')
		return (1);
	else if (c == ' ')
		return (1);
	else
		return (0);
}

char	ft_sign(char *str)
{
	int		i;
	int		sign_;
	char	sign;

	i = 0;
	sign_ = 0;
	sign = '+';
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sign_++;
		i++;
	}
	if ((sign_ % 2) != 0)
		sign = '-';
	return (sign);
}

int	ft_nbr_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && ft_is_valid(str[i]))
	{
		i++;
	}
	return (i);
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

int	ft_atoi(char *str)
{
	int	l_nbr;
	int	nbr;
	int	i;

	i = 0;
	nbr = 0;
	l_nbr = ft_nbr_len(str);
	while (i < l_nbr - 1)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			nbr += (str[i] - '0') * ft_to_power(10, (l_nbr - 1) - i);
		}
		i++;
	}
	nbr += (str[i] - '0');
	if (ft_sign(str) == '-')
		nbr *= -1;
	return (nbr);
}
