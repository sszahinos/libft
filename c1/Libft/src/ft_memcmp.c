/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:34:53 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/16 15:29:29 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*s1c;
	char	*s2c;

	s1c = (char *)s1;
	s2c = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1c[i] > s2c[i])
			return (1);
		if (s1c[i] < s2c[i])
			return (-1);
		i++;
	}
	return (0);
}
