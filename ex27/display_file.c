/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 05:53:08 by lufelip2          #+#    #+#             */
/*   Updated: 2022/05/26 21:33:42 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	display_file(int fd)
{
	int		rd;
	char	data[101];

	data[100] = '\0';
	while (TRUE)
	{
		rd = read(fd, data, 100);
		if (rd == 100)
		{
			ft_putstr(STDOUT, data);
			continue ;
		}
		else
		{
			data[rd] = '\0';
			ft_putstr(STDOUT, data);
			break ;
		}
	}
	close(fd);
}
