/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:00:51 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/19 13:47:11 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*dstc;
	char	*srcc;

	if (!dst || !src)
		return (dst);
	dstc = (char *)dst;
	srcc = (char *)src;
	i = 0;
	while (i < n)
	{
		dstc[i] = srcc[i];
		i++;
	}
	dst = (void *)dstc;
	return (dst);
}
