/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_printable.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:08:26 by lufelip2          #+#    #+#             */
/*   Updated: 2022/04/19 17:11:31 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
	char a[] = "HU\nMAN";
	char b[] = "Human";
	char c[] = "";

	if (ft_str_is_printable(a))
	{
		printf("String vazia ou imprimivel\n");
	}
	else
		printf("String não é imprimivel\n");
	if (ft_str_is_printable(b))
	{
		printf("String vazia ou imprimivel\n");
	}
	else
		printf("String não é imprimivel\n");
	if (ft_str_is_printable(c))
	{
		printf("String vazia ou imprimivel\n");
	}
	else
		printf("String não é imprimivel\n");
}