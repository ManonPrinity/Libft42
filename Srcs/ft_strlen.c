/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 16:13:59 by nmanon            #+#    #+#             */
/*   Updated: 2016/08/07 11:59:58 by nmanon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft.h"

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
