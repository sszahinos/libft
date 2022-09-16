/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:51:36 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/16 15:13:01 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*calloc(unsigned int count, unsigned int size)
{
	int				*mem;
	unsigned int	i;

	mem = malloc(size * count);
	if (!malloc)
		return (0);
	while (i < count)
		mem[i++] = 0;
	return ((void *)mem);
}
