/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 03:59:38 by lufelip2          #+#    #+#             */
/*   Updated: 2022/04/20 04:13:33 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char a[] = "human";
	char b[11] = "coder";
	char c[] = "human";
	char d[11] = "coder";

	ft_strcat(b, a);
	printf("%s\n", b);
	strcat(d, c);
	printf("%s\n", d);
}