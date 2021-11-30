/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:02:00 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/30 16:55:06 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

// int	ft_putstr(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{	
// 		if (!str)
// 		{
// 			write (1, "(null)", 6);
// 			return (6);
// 		}
// 		else
// 		{
// 			ft_putchar(str[i]);
// 			i++;
// 		}
// 	}
// 	free (str);
// 	return (i);
// }
int	ft_putstr(char *str)
{
	int	len;

	if (!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(str);
	write (1, str, len);
	return (len);
}
