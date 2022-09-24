/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:52:10 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/24 15:52:20 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if ((unsigned char)set[i++] == (unsigned char)c)
			return (1);
	}
	return (0);
}

static char	*get_mem(int *st_end, int len)
{
	char	*new_str;

	new_str = 0;
	if (st_end[0] == len && st_end[1] == len)
		new_str = malloc(sizeof(char));
	else
		new_str = malloc(sizeof(char) * (len - (st_end[0] + st_end[1]) + 1));
	if (!new_str)
		return (0);
	return (new_str);
}	

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	int		st_end[2];
	char	*new_str;

	st_end[0] = 0;
	st_end[1] = 0;
	len = ft_strlen(s1);
	i = -1;
	while (s1[++i] && is_set(s1[i], set) == 1)
		st_end[0]++;
	i = len - 1 + 1;
	while (--i >= 0 && is_set(s1[i], set) == 1)
		st_end[1]++;
	new_str = get_mem(st_end, len);
	if (!new_str)
		return (0);
	i = 0;
	while (i + st_end[0] < len - st_end[1])
	{
		new_str[i] = s1[i + st_end[0]];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
