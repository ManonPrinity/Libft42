/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 05:37:40 by nmanon            #+#    #+#             */
/*   Updated: 2016/11/13 05:37:41 by nmanon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char tmp[n];

	ft_memcpy(tmp, s2, n);
	ft_memcpy(s1, tmp, n);
	return (s1);
}
