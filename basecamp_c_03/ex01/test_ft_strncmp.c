/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 03:22:13 by lufelip2          #+#    #+#             */
/*   Updated: 2022/04/20 04:20:05 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char a[] = "human";
	char b[] = "hçman";
	char c[] = "human";
	char d[] = "coder";
	char e[] = "coder";
	
	printf("%d\n", ft_strncmp(a, b, 3));
	printf("%d\n", strncmp(a, b, 3));
	printf("----------\n");
	printf("%d\n", ft_strncmp(c, d, 3));
	printf("%d\n", strncmp(c, d, 3));
	printf("----------\n");
	printf("%d\n", ft_strncmp(d, e, 3));
	printf("%d\n", strncmp(d, e, 3));
}