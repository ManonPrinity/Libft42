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
