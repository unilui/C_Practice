/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_alpha.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:18:23 by lufelip2          #+#    #+#             */
/*   Updated: 2022/04/19 16:40:43 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char a[] = "Hu1man";
	char b[] = "Human";
	char c[] = "";

	if (ft_str_is_alpha(a))
	{
		printf("String vazia ou alpha\n");
	}
	else
		printf("String não é alpha\n");
	if (ft_str_is_alpha(b))
	{
		printf("String vazia ou alpha\n");
	}
	else
		printf("String não é alpha\n");
	if (ft_str_is_alpha(c))
	{
		printf("String vazia ou alpha\n");
	}
	else
		printf("String não é alpha\n");
}