/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:16:40 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/19 11:06:15 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*temp;

	temp = malloc(sizeof(char) * n);
	if (!temp)
		return (0);
	temp = ft_memcpy(temp, src, n);
	dst = ft_memcpy(dst, temp, n);
	return (dst);
}
