/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 12:20:17 by nmanon            #+#    #+#             */
/*   Updated: 2016/08/11 01:46:41 by nmanon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft.h"

int		find(char *str, char *to_find)
{
	int		i;

	i = 0;
	while (str[i] && to_find[i] && str[i] == to_find[i])
		i++;
	if (to_find[i] == '\0')
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
			if (find(&(str[i]), to_find))
				return (&str[i]);
		i++;
	}
	return (0);
}
