/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:32:34 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/29 11:32:35 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	count;

	count = 0;
	if (!dst || !src)
		return (0);
	if (n == 0)
	{
		while (src[count])
			count++;
		return (count);
	}
	while (count < n - 1 && src[count] != '\0')
	{
		dst[count] = src[count];
		count++;
	}
	dst[n - 1] = '\0';
	if (count < n)
		dst[count] = '\0';
	while (src[count] != '\0')
		count++;
	return (count);
}
