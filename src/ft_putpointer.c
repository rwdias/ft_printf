/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:48:48 by rapareci          #+#    #+#             */
/*   Updated: 2021/12/01 23:24:01 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:48:48 by rapareci          #+#    #+#             */
/*   Updated: 2021/12/01 17:42:20 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	count_hex(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

static char	*hex_to_str(unsigned long n, char *base)
{
	int		size;
	char	*hex;

	size = count_hex(n);
	hex = (char *)malloc(sizeof(char) * (size + 1));
	if (!hex)
		return (NULL);
	hex[size] = '\0';
	while (size > 0)
	{
		hex[size - 1] = base[n % 16];
		n = n / 16;
		size--;
	}
	return (hex);
}

int	ft_putpointer(void *nbr, char *base)
{
	int				len;
	char			*str;
	unsigned long	n;

	len = 0;
	if (!IS_MACOS && !nbr)
	{
		len += ft_putstr("(nil)");
		return (len);
	}
	len += ft_putstr("0x");
	n = (unsigned long)nbr;
	str = hex_to_str(n, base);
	len += ft_putstr(str);
	free(str);
	return (len);
}
