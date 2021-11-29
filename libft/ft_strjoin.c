/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:32:23 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/29 11:32:24 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;
	int		len_s1;
	int		len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!s1 || !s2 || !ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		ptr[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		ptr[i++] = s2 [j++];
	ptr[i] = '\0';
	return (ptr);
}
