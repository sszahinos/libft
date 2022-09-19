/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:51:36 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/19 13:44:49 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*mem;
	size_t	i;

	mem = malloc(size * count);
	if (!mem)
		return (0);
	while (i < count)
		mem[i++] = '\0';
	return ((void *)mem);
}
