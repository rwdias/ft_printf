/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:31:29 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/29 11:31:30 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		count;
	const char	*ptr_str;

	count = 0;
	ptr_str = str;
	while (count < n)
	{
		if (ptr_str[count] == (const char) c)
			return ((void *)(ptr_str + count));
		count++;
	}
	return (NULL);
}
