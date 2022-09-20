/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:34:53 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/20 09:24:07 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*s1c;
	char	*s2c;

	s1c = (char *)s1;
	s2c = (char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1c[i] > (unsigned char)s2c[i])
			return (1);
		if ((unsigned char)s1c[i] < (unsigned char)s2c[i])
			return (-1);
		i++;
	}
	return (0);
}
