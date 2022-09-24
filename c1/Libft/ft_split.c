/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:47:34 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/24 16:28:54 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, unsigned char c)
{
	int	normal_found;
	int	i;
	int	count;

	normal_found = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] != c)
			normal_found = 1;
		else if ((unsigned char)s[i] == c && normal_found == 1)
		{
			count++;
			normal_found = 0;
		}
		i++;
	}
	if (normal_found == 1)
		count++;
	return (count);
}

static char	*get_word(char const *str, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (0);
	i = 0;
	while (str[start + i] && start + i < end)
	{
		word[i] = str[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	clear_words(char **words)
{
	int	i;

	i = 0;
	while (words[i])
		free(words[i++]);
	free(words);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	int		normal_found;
	char	**words;

	words = malloc(sizeof(char *) * (count_words(s, (unsigned char)c) + 1));
	if (!words)
		return (0);
	i = 0;
	j = 0;
	start = 0;
	normal_found = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] != (unsigned char)c && normal_found == 0)
		{
			normal_found = 1;
			start = i;
		}
		else if ((unsigned char)s[i] == (unsigned char)c && normal_found == 1)
		{
			normal_found = 0;
			words[j] = get_word(s, start, i);
			if (!words[j])
			{
				clear_words(words);
				return (0);
			}
			j++;
		}
		i++;
	}
	if (normal_found == 1)
	{
		words[j] = get_word(s, start, i);
		j++;
	}
	words[j] = 0;
	return (words);
}
