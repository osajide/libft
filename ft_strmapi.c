/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osajide <osajide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:10:02 by osajide           #+#    #+#             */
/*   Updated: 2023/06/07 23:31:22 by osajide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	f(unsigned int i, char c)
{
	if (c >= 65 && c <= 90)
		c += 32 - i + i;
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*smapi;
	int		i;

	if (!s)
		return (NULL);
	smapi = ft_strdup(s);
	if (!smapi)
		return (0);
	i = 0;
	while (smapi[i])
	{
		smapi[i] = f(i, s[i]);
		i++;
	}
	return (smapi);
}
