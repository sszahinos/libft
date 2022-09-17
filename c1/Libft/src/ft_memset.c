/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:48:30 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/16 15:01:10 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*bc;

	bc = (char *)b;
	i = 0;
	while (i < len)
		bc[i++] = (unsigned char)c + '0';
	return (b);
}
