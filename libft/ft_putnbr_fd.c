/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:32:03 by rapareci          #+#    #+#             */
/*   Updated: 2021/11/29 11:32:04 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	l_nb;

	l_nb = n;
	if (l_nb < 0)
	{
		l_nb *= -1;
		ft_putchar_fd('-', fd);
	}
	if (l_nb > 9)
	{
		ft_putnbr_fd((l_nb / 10), fd);
		ft_putchar_fd((l_nb % 10 + '0'), fd);
	}
	else
		ft_putchar_fd((l_nb + '0'), fd);
}
