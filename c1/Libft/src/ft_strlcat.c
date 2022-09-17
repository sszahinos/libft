/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:30:37 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/16 15:31:05 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char * dst, const char * src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	while (i < dstsize && dst[i] != '\0')
		i++;
	j = 0;
	while (i + j < dstsize && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i + j < dstsize)
		dst[i + j] = '\0';
	return (i + j);
}