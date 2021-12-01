/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:07:34 by rapareci          #+#    #+#             */
/*   Updated: 2021/12/01 18:10:28 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# if __APPLE__
#  define IS_MACOS 1
# else
#  define IS_MACOS 0
# endif
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include "../libft/libft.h"

int	ft_printf(const char *entry, ...);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_puthexa(long int n);
int	ft_puthexa_caps(long int n);
int	ft_putstr(char *str);
int	ft_putnbr_u(unsigned int nb);
int	ft_putpointer(void *nbr, char *base);

#endif