/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexamar <xandemvieira@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:36:34 by alexamar          #+#    #+#             */
/*   Updated: 2021/11/09 21:45:49 by alexamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	char	*sub;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		sub = ft_strdup("");
		return (sub);
	}
	if ((s_len - start) < len)
		len = s_len - start;
	sub = (char *)malloc(len + 1);
	if (sub != NULL)
		ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
