/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:05:01 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/30 17:09:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_puthexa(long int n)
{
	unsigned long int	nbr;
	int					sign;
	int					len;
	char				c;

	len = 0;
	sign = 1;
	if (n < 0)
		sign = -1;
	nbr = n * sign;
	if (n < 0)
		len += ft_putchar('-');
	if (nbr >= 16)
		len += ft_puthexa(nbr / 16);
	if (nbr % 16 >= 10)
		c = nbr % 16 + 87;
	else
		c = nbr % 16 + 48;
	len += ft_putchar(c);
	return (len);
}
