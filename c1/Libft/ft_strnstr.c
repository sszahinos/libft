/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:44:09 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/20 08:51:17 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int	i;
	int				j;
	char			*pnt_first;
	char			*str_arr;

	str_arr = (char *)str;
	if (to_find[0] == '\0')
		return (str_arr);
	i = 0;
	while (str[i] && i < (unsigned int)len)
	{
		j = 0;
		pnt_first = &str_arr[i];
		while (str[i + j] == to_find[j] && i + j < (unsigned int)len)
		{
			if (to_find[j + 1] == '\0')
				return (pnt_first);
			j++;
		}
		i++;
	}
	return (0);
}
