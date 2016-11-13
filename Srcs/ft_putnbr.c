/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 10:41:25 by nmanon            #+#    #+#             */
/*   Updated: 2016/08/11 12:09:06 by nmanon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int			i;
	long int	n;

	n = (long int)nb;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	i = 1;
	while (n / i >= 10)
	{
		i = i * 10;
	}
	while (i > 0)
	{
		ft_putchar(((n / i) % 10) + '0');
		i = i / 10;
	}
}
