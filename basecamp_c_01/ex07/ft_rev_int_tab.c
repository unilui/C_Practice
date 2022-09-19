/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 06:54:39 by lufelip2          #+#    #+#             */
/*   Updated: 2022/04/13 07:54:39 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
	
void	ft_rev_int_tab(int *tab, int size)
{
	int start;
	int middle;
	int end;
	
	start = 0;
	middle = size / 2;
	end = size - 1;
	if (size % 2 == 0)
		middle--;
	while(start <= middle)
	{
		ft_swap(&tab[start], &tab[end]);
		start++;
		end--;
	}
}