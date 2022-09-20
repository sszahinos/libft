/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:16:40 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/20 10:48:56 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*temp;

	if (!dst || !src)
		return (0);
	temp = ft_calloc((ft_strlen(src) + 1), sizeof(char));
	if (!temp)
		return (0);
	temp = ft_memcpy(temp, src, n);
	dst = ft_memcpy(dst, temp, n);
	free(temp);
	return (dst);
}*/

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if (dst < src)
	{
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			((char *)dst)[n] = ((char *)src)[n];
		}
	}
	return (dst);
}

