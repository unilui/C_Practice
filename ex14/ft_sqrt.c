/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 23:07:53 by lufelip2          #+#    #+#             */
/*   Updated: 2022/05/21 00:02:31 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	nbr;

	nbr = 1;
	while (nbr * nbr < nb)
		nbr++;
	if (nbr * nbr == nb)
		return (nbr);
	else
		return (0);
}