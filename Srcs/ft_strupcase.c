/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 16:28:08 by nmanon            #+#    #+#             */
/*   Updated: 2016/08/11 14:29:06 by nmanon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft.h"

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
