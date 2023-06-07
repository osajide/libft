/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osajide <osajide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:27:07 by osajide           #+#    #+#             */
/*   Updated: 2022/10/22 12:46:46 by osajide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	n_len(int n)
{
	int		len;
	long	nb;

	nb = n;
	if (n == 0)
		return (1);
	len = 0;
	if (nb < 0)
	{
		len++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*s;

	nb = n;
	len = n_len(nb);
	s = malloc((len + 1) * sizeof(char));
	if (!s)
		return (0);
	if (nb == 0)
		s[0] = '0';
	if (nb < 0)
	{
		s[0] = '-';
		nb *= -1;
	}
	s[len--] = '\0';
	while (nb > 0)
	{
		s[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (s);
}
