/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osajide <osajide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:36:11 by osajide           #+#    #+#             */
/*   Updated: 2022/10/17 15:31:56 by osajide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		slen;
	int		i;
	char	*cs1;

	slen = (ft_strlen(s1));
	dup = malloc(slen + 1);
	i = 0;
	if (dup == NULL)
		return (0);
	cs1 = (char *)s1;
	while (i < slen)
	{
		dup[i] = cs1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
