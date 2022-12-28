/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osajide <osajide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:53:34 by osajide           #+#    #+#             */
/*   Updated: 2022/10/25 08:21:21 by osajide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub;
	char			*tcs;

	if (!s)
		return (NULL);
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	tcs = (char *)s;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	if (start >= 0)
	{
		i = 0;
		while (tcs[start] && i < len)
			sub[i++] = tcs[start++];
		sub[i] = '\0';
		return (sub);
	}
	return (0);
}
