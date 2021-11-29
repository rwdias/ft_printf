/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:31:49 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/29 11:31:50 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	count;
	char	*ptr;

	count = 0;
	ptr = str;
	while (count < n)
	{
		ptr[count] = c;
		count++;
	}
	return (str);
}
