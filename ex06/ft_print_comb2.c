/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:59:11 by tcastro-          #+#    #+#             */
/*   Updated: 2021/06/02 16:35:50 by tcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printable(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '9' && c == '9' && d == '9')
	{
	}
	else
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_logic(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_printable(a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			b++;
			d = b + 1;
			c = a;
		}
		a++;
		b = '0';
		c = a;
		d = b + 1;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	ft_logic(a, b, c, d);
}
