/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osajide <osajide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:28:06 by osajide           #+#    #+#             */
/*   Updated: 2023/06/08 15:35:06 by osajide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*join;

	if (!s1)
		s1 = ft_calloc(1, 1);
	if (!s2)
		return ((char *)s1);
	join = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!join)
		return (NULL);
	i = 0;
	j = 0;
	while (((char *)s1)[i])
	{
		join[i] = ((char *)s1)[i];
		i++;
	}
	while (((char *)s2)[j])
		join[i++] = ((char *)s2)[j++];
	join[i] = '\0';
	return (join);
}
