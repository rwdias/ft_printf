/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:07:34 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/30 17:19:01 by coder            ###   ########.fr       */
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