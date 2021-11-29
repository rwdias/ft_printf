/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:31:40 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/29 11:31:41 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr_src;
	size_t				count;

	ptr = dest;
	ptr_src = src;
	count = 0;
	if (!dest && !src)
		return (0);
	while (count < n)
	{
		ptr[count] = ptr_src[count];
		count++;
	}
	return (dest);
}
