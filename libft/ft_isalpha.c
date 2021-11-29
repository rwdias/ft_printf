/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:31:03 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/29 11:31:04 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int arg)
{
	if (arg >= 'A' && arg <= 'Z')
		return (1);
	else if (arg >= 'a' && arg <= 'z')
		return (2);
	else
		return (0);
}
