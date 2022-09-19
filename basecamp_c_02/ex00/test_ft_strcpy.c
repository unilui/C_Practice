/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:26:49 by lufelip2          #+#    #+#             */
/*   Updated: 2022/04/18 21:38:35 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char src[] = "human";
	char dest[6];

	ft_strcpy(dest, src);
	printf("%s\n", src);
	printf("%s\n", dest);
	return(0);
}