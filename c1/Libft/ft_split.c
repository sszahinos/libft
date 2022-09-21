/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:47:34 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/21 12:19:01 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, unsigned char c)
{
	int	count;
	int	i;

	count = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == c)
			count++;
		i++;
	}
	return (++count);
}

static char	*get_word(char const *str, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (1 + (end - start)));
	if (!word)
		return (0);
	i = 0;
	while (str[start + i] && start + i <= end) //ojo!
	{
		word[i] = str[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**words;

	words = malloc(sizeof(char *) * (count_words(s, (unsigned char)c) + 1));
	if (!words)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		start = i;
		while (s[i])
		{
			if ((unsigned int)s[i] == (unsigned int)c)
			{
				words[j] = get_word(s, start, i);
				if (!words[j])
					return (0);
				j++;
				break;
			}
			i++;
		}
		i++;
	}
	words[j] = NULL;
	return (words);
}
