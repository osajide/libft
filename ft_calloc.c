/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osajide <osajide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:29:05 by osajide           #+#    #+#             */
/*   Updated: 2022/10/23 08:52:19 by osajide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int	*p;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	p = malloc(count * size);
	if (p == 0)
		return (p);
	else
		ft_bzero(p, count * size);
	return (p);
}
