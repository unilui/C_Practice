/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_uppercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:02:33 by lufelip2          #+#    #+#             */
/*   Updated: 2022/04/19 17:03:28 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{
	char a[] = "HUMAN";
	char b[] = "Human";
	char c[] = "";

	if (ft_str_is_uppercase(a))
	{
		printf("String vazia ou maiuscula\n");
	}
	else
		printf("String não é maiuscula\n");
	if (ft_str_is_uppercase(b))
	{
		printf("String vazia ou maiuscula\n");
	}
	else
		printf("String não é maiuscula\n");
	if (ft_str_is_uppercase(c))
	{
		printf("String vazia ou maiuscula\n");
	}
	else
		printf("String não é maiuscula\n");
}