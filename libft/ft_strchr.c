/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:32:15 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/29 11:32:16 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr_str;
	char	f;

	ptr_str = (char *)s;
	f = (unsigned char) c;
	while (*ptr_str != '\0')
	{
		if (*ptr_str == f)
			return (ptr_str);
		ptr_str++;
	}
	if (*ptr_str == f)
		return (ptr_str);
	return (NULL);
}
