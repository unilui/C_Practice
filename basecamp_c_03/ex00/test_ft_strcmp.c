/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 03:04:42 by lufelip2          #+#    #+#             */
/*   Updated: 2022/04/20 03:31:31 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char a[] = "human";
	char b[] = "hçman";
	char c[] = "human";
	char d[] = "coder";
	char e[] = "coder";
	
	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", strcmp(a, b));
	printf("----------\n");
	printf("%d\n", ft_strcmp(c, d));
	printf("%d\n", strcmp(c, d));
	printf("----------\n");
	printf("%d\n", ft_strcmp(d, e));
	printf("%d\n", strcmp(d, e));
}
