/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:34:30 by tcastro-          #+#    #+#             */
/*   Updated: 2021/06/02 18:35:50 by tcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printable(long z)
{
	char	p;

	if (z >= 10)
		ft_printable(z / 10);
	z = (z % 10) + '0';
	p = z;
	write(1, &p, 1);
}

void	ft_putnbr(int nb)
{
	long	h;

	h = nb;
	if (h >= 0)
		ft_printable(h);
	else
	{
		write(1, "-", 1);
		h = 0 - h;
		ft_printable(h);
	}
}
