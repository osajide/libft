/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osajide <osajide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:38:51 by osajide           #+#    #+#             */
/*   Updated: 2022/10/23 14:31:28 by osajide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*tcs1;
	unsigned char		*tcs2;

	tcs1 = (unsigned char *)s1;
	tcs2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (tcs1[i] == tcs2[i] && i < n)
			i++;
		else
			return (tcs1[i] - tcs2[i]);
	}
	return (0);
}
