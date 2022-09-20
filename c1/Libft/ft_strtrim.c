/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:52:10 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/20 17:49:19 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set) //TODO EL SET NO SOLAMENTE CHAR
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

static int	count_set(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = 0;
	while (s1[i])
	{
		if (is_set(s1[i], set) == 1)
			count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		count;
	int		len;
	char	*new_str;

	len = ft_strlen(s1);
	count = count_set(s1, set);
	new_str = malloc(sizeof(char) * (len - count + 1));
	if (!new_str)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (is_set(s1[i], set) == 0)
		{
			new_str[j] = s1[i];
			j++;
		}
		i++;
	}
	new_str[j] = '\0';
	return (new_str);
}
