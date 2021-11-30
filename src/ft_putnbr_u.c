/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:51:56 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/30 17:21:02 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr_u(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb >= 10)
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	else
		len += ft_putchar(nb + '0');
	return (len);
}
