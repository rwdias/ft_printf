/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:33:01 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/29 11:33:02 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr_str;
	int		count;
	char	f;

	count = ft_strlen(str);
	ptr_str = (char *)str + (count - 1);
	f = (unsigned char) c;
	if (f == 0)
	{
		ptr_str++;
		return (ptr_str);
	}
	while (count != 0)
	{
		if (*ptr_str == f)
			return (ptr_str);
		ptr_str--;
		count--;
	}
	return (NULL);
}
