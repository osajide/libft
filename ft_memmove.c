/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osajide <osajide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:32:41 by osajide           #+#    #+#             */
/*   Updated: 2022/10/24 10:40:56 by osajide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tcs;
	unsigned char		*tcd;

	i = 0;
	tcs = (unsigned char *)src;
	tcd = (unsigned char *)dst;
	if (!tcd && !tcs)
		return (0);
	if (tcd > tcs)
	{
		while (i < n)
		{
			tcd[n - 1] = tcs[n - 1];
			n--;
		}
		return (dst);
	}
	else
		ft_memcpy(tcd, tcs, n);
	return (dst);
}
