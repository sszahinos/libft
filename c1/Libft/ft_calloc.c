/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:51:36 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/27 16:44:08 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*mem;
	size_t	i;

	mem = malloc(size * count);
	if (!mem)
		return (0);
	i = 0;
	while (i < (size * count))
		mem[i++] = '\0';
	return ((void *)mem);
}
