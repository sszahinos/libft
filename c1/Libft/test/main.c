/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:20:46 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/21 18:11:14 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return ((size_t)i);
}


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

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	int		normal_found;
	char	**words;
	char	*aux;
	
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
			aux = get_word(s, start, i);
			words[j] = aux;
			free(aux);
			if (!words[j])
				return (0);
			j++;
		}
		i++;
	}
	if (normal_found == 1)
	{
		words[j] = get_word(s, start, i);
		j++;
	}
	words[j] = NULL;
	return (words);
}

int main(void)
{
	int	i;
	char	**words;

	words = ft_split("hola!", ' ');
	i = 0;
	while (words[i])
	{
		printf("%s\n", words[i]);
		i++;
	}
	return (0);
}
