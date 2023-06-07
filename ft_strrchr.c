/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osajide <osajide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:33:40 by osajide           #+#    #+#             */
/*   Updated: 2022/10/23 14:39:06 by osajide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	*p;

	p = (char *)str;
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (p[len] == (char)c)
			return (p + len);
		len--;
	}
	return (0);
}
