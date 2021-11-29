/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:32:44 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/29 11:32:45 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr_s;
	int		count;

	count = 0;
	if (!s || !f)
		return (NULL);
	ptr_s = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ptr_s)
		return (NULL);
	while (s[count])
	{
		ptr_s[count] = f(count, s[count]);
		count++;
	}
	ptr_s[count] = '\0';
	return (ptr_s);
}
