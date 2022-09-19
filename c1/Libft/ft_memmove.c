/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:16:40 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/19 13:42:46 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
}
