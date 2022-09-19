/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:49:14 by lufelip2          #+#    #+#             */
/*   Updated: 2022/05/25 20:58:37 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap_ptr(char **a, char **b);
void	ft_sort_params(int len, char **args);
void	ft_print_params(int len, char **args);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_params(argc, argv);
		ft_print_params(argc, argv);
	}
	else
		return (1);
	return (0);
}

void	ft_sort_params(int len, char **args)
{
	int	i;

	i = 1;
	while (i < len)
	{
		if (i == len - 1)
		{
			if (ft_strcmp(args[i], args[1]) < 0)
			{
				ft_swap_ptr(&args[i], &args[1]);
				i = 1;
				continue ;
			}
		}
		else
		{
			if (ft_strcmp(args[i], args[i + 1]) > 0)
			{
				ft_swap_ptr(&args[i], &args[i + 1]);
				i = 1;
				continue ;
			}
		}
		i++;
	}
}

void	ft_print_params(int len, char **args)
{
	int	i;
	int	x;

	i = 1;
	x = 0;
	while (i < len)
	{
		while (args[i][x])
		{
			ft_putchar(args[i][x]);
			x++;
		}
		ft_putchar('\n');
		x = 0;
		i++;
	}
}

void	ft_swap_ptr(char **a, char **b)
{
	char	*hold;

	hold = *a;
	*a = *b;
	*b = hold;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else
		i++;
	}
	return (0);
}
