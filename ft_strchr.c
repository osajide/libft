/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osajide <osajide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:25:00 by osajide           #+#    #+#             */
/*   Updated: 2022/10/24 10:41:17 by osajide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*p;

	i = 0;
	while ((char)str[i] != (char )c && str[i] != '\0')
		i++;
	if ((char)str[i] == (char)c)
	{
		p = (char *)&str[i];
		return (p);
	}
	return (0);
}
