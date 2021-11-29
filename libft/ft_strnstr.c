/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:32:58 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/29 11:32:59 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	len_s2;

	if (*s2 == '\0')
		return ((char *)s1);
	len_s2 = ft_strlen(s2);
	while (*s1 != '\0' && len-- >= len_s2)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, len_s2) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
