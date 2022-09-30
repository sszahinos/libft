/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:52:34 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/28 11:54:24 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(char const *s, unsigned int start, size_t len)
{
	int	entire_len;

	entire_len = ft_strlen(s);
	if ((long long int)len > 2147483647LL)
		len = (size_t)((unsigned int)entire_len - start);
	else if (start >= (unsigned int)entire_len)
		len = 0;
	else if (start + len > (size_t)entire_len)
		len = entire_len - start;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if ((long long int)start > 2147483647LL)
	{
		start = ft_strlen(s);
		len = 0;
	}
	else
		len = get_len(s, start, len);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	i = 0;
	while (i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
