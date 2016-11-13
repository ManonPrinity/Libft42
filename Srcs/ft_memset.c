/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 06:35:47 by nmanon            #+#    #+#             */
/*   Updated: 2016/11/10 06:36:00 by nmanon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft.h"

void	*ft_memset (void *b, int c, size_t len)
{
	unsigned char	*cur;

	if (len == 0)
		return(b);
	cur  = (unsigned char *)b;
	while (len --)
	{
		*cur = (unsigned char)c;
		if (len)
			cur++;
	}
	return (b);
}
