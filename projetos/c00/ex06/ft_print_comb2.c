/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexamar <alexamar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:50:02 by alexamar          #+#    #+#             */
/*   Updated: 2021/06/10 12:56:39 by alexamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	ft_print (char a1, char a2, char b1, char b2)
{
	if (a1 != b1 || a2 != b2)
	{
		ft_putchar (a1);
		ft_putchar (a2);
		write (1, " ", 1);
		ft_putchar (b1);
		ft_putchar (b2);
		if (a1 != '9' || a2 != '8' || b1 != '9' || b2 != '9')
		{
			write (1, ", ", 2);
		}
	}
}

void	ft_contador(char a1, char a2, char b1, char b2)
{
	int	i1;
	int	i2;

	i1 = 0;
	while (i1 <= 98)
	{
		a1 = ((i1 / 10) + '0');
		a2 = ((i1 % 10) + '0');
		i2 = i1 + 1;
		while (i2 <= 99)
		{
			b1 = ((i2 / 10) + '0');
			b2 = ((i2 % 10) + '0');
			ft_print (a1, a2, b1, b2);
			i2 ++;
		}
		i1 ++;
	}
}

void	ft_print_comb2(void)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = '0';
	a2 = '0';
	b1 = '0';
	b2 = '0';
	ft_contador (a1, a2, b1, b2);
}
