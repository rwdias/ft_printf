/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:31:25 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/29 11:31:26 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char		*ptr_s1;
	const unsigned char	*ptr_s2;
	size_t				count;

	ptr_s1 = s1;
	ptr_s2 = s2;
	count = 0;
	if (!s1 && !s2)
		return (0);
	while (count < n)
	{
		ptr_s1[count] = ptr_s2[count];
		if (ptr_s2[count] == (unsigned char)c)
			return ((void *)(ptr_s1 + count + 1));
		count++;
	}
	return (0);
}
