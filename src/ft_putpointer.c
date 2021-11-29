/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:48:48 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/29 15:26:28 by rapareci         ###   ########.fr       */
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

	n = (unsigned long)nbr;
	str = hex_to_str(n, base);
	len = ft_putstr(str);
	free(str);
	return (len);
}

// int ft_putpointer(void *nbr)
// {
// 	// char *ptr = malloc(sizeof(char) * 15);

// 	// ptr ==&nbr;

// 	ft_putstr(&nbr);
// 	// free(ptr);
// 	return (0);
// }

// int main(void)
// {
	
// 	int a = 2343;
	
// 	ft_putpointer(a);
// 	return (0);
// }