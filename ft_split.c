/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osajide <osajide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 23:21:04 by osajide           #+#    #+#             */
/*   Updated: 2023/06/07 23:22:19 by osajide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	w_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	w_len(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	*w_fil(char const *s, char c)
{
	int		i;
	int		j;
	char	*w;

	i = 0;
	j = 0;
	w = ft_calloc(w_len(s, c) + 1, sizeof(char));
	while (s[i] == c)
		i++;
	if (s[i] && s[i] != c)
		ft_memcpy(w, s, w_len(s, c));
	return (w);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**split;

	if (!s)
		return (0);
	i = 0;
	j = w_count(s, c);
	split = malloc((j + 1) * sizeof(char *));
	if (!split)
		return (0);
	while (*s && j)
	{
		while (*s == c)
			s++;
		split[i] = w_fil(s, c);
		s = s + w_len(s, c);
		while (*s && *s == c)
			s++;
		i++;
	}
	split[i] = 0;
	return (split);
}
