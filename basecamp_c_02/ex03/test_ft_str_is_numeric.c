/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_numeric.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:46:01 by lufelip2          #+#    #+#             */
/*   Updated: 2022/04/19 16:48:13 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main(void)
{
	char a[] = "012345";
	char b[] = "Hum5an";
	char c[] = "";

	if (ft_str_is_numeric(a))
	{
		printf("String vazia ou numérica\n");
	}
	else
		printf("String não é numérica\n");
	if (ft_str_is_numeric(b))
	{
		printf("String vazia ou numérica\n");
	}
	else
		printf("String não é numérica\n");
	if (ft_str_is_numeric(c))
	{
		printf("String vazia ou numérica\n");
	}
	else
		printf("String não é numérica\n");
}