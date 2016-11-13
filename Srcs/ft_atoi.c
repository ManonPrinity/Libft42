/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 10:45:55 by nmanon            #+#    #+#             */
/*   Updated: 2016/08/09 23:40:58 by nmanon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft.h"

int		ft_atoi(char *str)
{
	int i;
	int tmp;
	int neg;

	neg = 1;
	i = 0;
	tmp = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] - 48) >= 0 && (str[i] - 48) <= 9)
	{
		tmp *= 10;
		tmp += str[i] - 48;
		i++;
	}
	tmp *= neg;
	return (tmp);
}
