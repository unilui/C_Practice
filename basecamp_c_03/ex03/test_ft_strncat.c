/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 04:23:56 by lufelip2          #+#    #+#             */
/*   Updated: 2022/04/20 04:28:51 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char a[] = "human";
	char b[11] = "coder";
	char c[] = "human";
	char d[11] = "coder";

	ft_strncat(b, a, 3);
	printf("%s\n", b);
	strncat(d, c, 3);
	printf("%s\n", d);
}