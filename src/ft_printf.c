/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raparecn<rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:07:03 by raparecn         #+#    #+#             */
/*   Updated: 2021/11/27 19:57:49 by raparecn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *entry, ...);


int ft_return(const char *entry, va_list arg, int n)
{
	if (entry[n+ 1] == '%')
        return (ft_putchar('%'));
    else if (entry[n+ 1] == 'c')
        return (ft_putchar(va_arg(arg, int)));
    else if (entry[n+ 1] == 's')
        return (ft_putstr(va_arg(arg, char *)));
    else if (entry[n+ 1] == 'd' || entry[n+ 1] == 'i')
        return (ft_putnbr(va_arg(arg, int)));
    else if (entry[n+ 1] == 'u')
        return (ft_putnbr_u(va_arg(arg, unsigned int)));
    else if (entry[n+ 1] == 'x')
    	return (ft_puthexa(va_arg(arg, unsigned int)));
	else if (entry[n+ 1] == 'X')
		return (ft_puthexa_caps(va_arg(arg, unsigned int)));
    // else if (entry[n+ 1] == 'p')
    //     return (ft_putstr("0x") + put_pointer(va_arg(arg, void *), \
    //             "0123456789abcdef"));
    else
        return (0);
}



int	ft_printf(const char *entry, ...)
{
	va_list args;
	va_start(args, entry);
	int count;
	int n;

	n = 0;
	count = 0;
	while (entry[n] != '\0')
	{
		if (entry[n] == '%' && ft_strchr("cspdiuxX%", entry[n + 1]))
		{
			count += ft_return(entry, args, n);
			n++;
		}
		else
			count += ft_putchar(entry[n]);
		n++;	
	}
	va_end(args);
	return(count);
}
