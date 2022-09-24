/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:52:34 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/24 11:36:18 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if ((long long int)start > 2147483647LL)
	{
		start = ft_strlen(s);
		len = 0;
	}
	else if (start >= (unsigned int)ft_strlen(s))
		len = 0;
	else if (ft_strlen(s) < len)
		len = ft_strlen(s);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	i = 0;
	while (s[i + start] && i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
