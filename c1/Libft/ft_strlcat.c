/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:33:07 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/27 15:17:17 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	int		src_count;
	int		dst_count;

	src_count = ft_strlen(src);
	dst_count = ft_strlen(dst);
	if (dstsize == 0)
		return (src_count);
	if (dstsize < (size_t)dst_count)
		src_count += dstsize;
	else
		src_count += dst_count;
	j = 0;
	while (src[j] && dst_count + j < dstsize - 1)
	{
		dst[dst_count + j] = src[j];
		j++;
	}
	dst[dst_count + j] = '\0';
	return (src_count);
}
