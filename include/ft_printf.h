/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:07:34 by rapareci          #+#    #+#             */
/*   Updated: 2021/12/01 23:31:01 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
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

# if __APPLE__
#  define IS_MACOS 1
# else
#  define IS_MACOS 0

# endif