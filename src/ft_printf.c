/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:07:03 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/19 14:57:27 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *entry, ...);

int	ft_printf(const char *entry, ...)
{
	const char *temp;
	
	temp = malloc((sizeof (char)) * 1);
	temp = entry;
	
	return(0);
}