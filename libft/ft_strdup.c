/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:32:20 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/29 11:32:21 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(src);
	ptr = malloc(len + 1);
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, src, len + 1);
	ptr[len] = '\0';
	return (ptr);
}
