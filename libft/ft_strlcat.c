/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:32:28 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/29 11:32:29 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = 0;
	len_src = 0;
	while (dst[len_dst] && len_dst < size)
		len_dst++;
	while (src[len_src] && (len_dst + len_src + 1) < size)
	{
		dst[len_dst + len_src] = src[len_src];
		len_src++;
	}
	if (len_dst < size)
		dst[len_dst + len_src] = '\0';
	return (len_dst + ft_strlen(src));
}
