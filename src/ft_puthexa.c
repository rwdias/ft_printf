/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:05:01 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/28 14:11:40 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_puthexa(long int n)
{
	unsigned long int	nbr;
	int					sign;
	char				c;

	sign = 1;
	if (n < 0)
		sign = -1;
	nbr = n * sign;
	if (n < 0)
		ft_putchar('-');
	if (nbr >= 16)
		ft_puthexa(nbr / 16);
	if (nbr % 16 >= 10)
		c = nbr % 16 + 87;
	else
		c = nbr % 16 + 48;
	ft_putchar(c);
	return (0);
}
