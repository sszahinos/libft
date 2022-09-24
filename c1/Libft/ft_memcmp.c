/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:34:53 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/24 12:36:12 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				ret;
	size_t			i;
	unsigned char	*s1c;
	unsigned char	*s2c;

	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	ret = 0;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1c[i] > (unsigned char)s2c[i])
			ret = 1;
		else if ((unsigned char)s1c[i] < (unsigned char)s2c[i])
			ret = 1;
		if (ret)
			return ((unsigned char)s1c[i] - (unsigned char)s2c[i]);
		i++;
	}
	return (0);
}
