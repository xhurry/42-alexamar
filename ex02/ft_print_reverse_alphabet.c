/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:35:56 by tcastro-          #+#    #+#             */
/*   Updated: 2021/06/01 18:38:31 by tcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	auxiliar;

	auxiliar = 122;
	while (auxiliar > 96)
	{
		write(1, &auxiliar, 1);
		auxiliar--;
	}
}
