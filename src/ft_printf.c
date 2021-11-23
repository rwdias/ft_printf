/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:07:03 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/23 20:14:20 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *entry, ...);

int	ft_printf(const char *entry, ...)
{
	va_list args;
	va_start(args, entry);
	int n;
	char *ptr;

	n = 0;
	while (entry[n])
	{
		if (entry[n] == '%' && ft_strchr("cspdiuxX%", entry[n + 1]))
			ptr = va_arg(args, char *);
			printf("ptr = %s\n", ptr);
			
			
		n++;
		
	}
	

	va_end(args);
	
	
	
	return(0);
}
