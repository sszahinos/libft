/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:44:09 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/16 15:32:16 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t			i;
	int				j;
	char			*pnt_first;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		pnt_first = &str[i];
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (pnt_first);
			j++;
		}
		i++;
	}
	return (0);
}
