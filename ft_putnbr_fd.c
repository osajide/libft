/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osajide <osajide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:52:06 by osajide           #+#    #+#             */
/*   Updated: 2023/06/07 23:23:40 by osajide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long int	n;
	char		c;

	n = nb;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if ((n / 10))
		ft_putnbr_fd(n / 10, 1);
	c = n % 10 + 48;
	write(1, &c, 1);
}
