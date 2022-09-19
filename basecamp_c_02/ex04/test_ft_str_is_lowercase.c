/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_lowercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:58:27 by lufelip2          #+#    #+#             */
/*   Updated: 2022/04/19 16:59:39 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main(void)
{
	char a[] = "Human";
	char b[] = "human";
	char c[] = "";

	if (ft_str_is_lowercase(a))
	{
		printf("String vazia ou minuscula\n");
	}
	else
		printf("String não é minuscula\n");
	if (ft_str_is_lowercase(b))
	{
		printf("String vazia ou minuscula\n");
	}
	else
		printf("String não é minuscula\n");
	if (ft_str_is_lowercase(c))
	{
		printf("String vazia ou minuscula\n");
	}
	else
		printf("String não é minuscula\n");
}