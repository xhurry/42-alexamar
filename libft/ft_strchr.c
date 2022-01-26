/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexamar <xandemvieira@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:54:00 by alexamar          #+#    #+#             */
/*   Updated: 2022/01/26 11:55:13 by alexamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	size_t	length;

	length = ft_strlen(s);
	if (c == 0 && length == 0)
		return ((char *)s);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s[i]);
		i++;
	}
	if ((s)[i] == ((unsigned char) c))
		return ((char *)s[i]);
	return (NULL);
}
