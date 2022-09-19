/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufelip2 <lufelip2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 02:22:10 by lufelip2          #+#    #+#             */
/*   Updated: 2022/05/26 06:29:10 by lufelip2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# include <unistd.h>
# include <fcntl.h>

# define TRUE 1
# define STDOUT 1
# define STDERR 2
# define FILE_MISSING "File name missing."
# define TOO_MANY_ARGUMENTS "Too many arguments."
# define NO_FILE "No such file."

void	ft_putchar(int output, char c);
void	ft_putstr(int output, char *str);
void	display_file(int fd);
#endif