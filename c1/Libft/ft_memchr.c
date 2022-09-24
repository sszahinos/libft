/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:57:47 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/24 12:02:05 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;
	unsigned char	*sc;

	uc = (unsigned char)c;
	sc = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (sc[i] == uc)
			return ((void *)s + i);
		i++;
	}
	if (sc[i] == uc && i < n)
		return ((void *)s + i);
	return (0);
}
