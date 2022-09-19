/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:45:12 by lufelip2          #+#    #+#             */
/*   Updated: 2022/04/19 20:01:04 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char src[] = "human";
	char dest[6];

	ft_strncpy(dest, src, 5);
	printf("%s\n", src);
	printf("%s\n", dest);
	return(0);
}