/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:20:46 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/20 10:53:13 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

char	*ft_memchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	uc = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == uc)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == uc)
		return ((char *)s + i);
	return (0);
}

int	main(void)
{
	printf("%s", ft_memchr("test", 101));
	return (0);
}
