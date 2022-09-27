/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:47:34 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/27 16:43:38 by sersanch         ###   ########.fr       */
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
	word[i] = (char) NULL;
	return (word);
}

static int	clear_words(char **words)
{
	int	i;

	i = 0;
	while (words[i])
		free(words[i++]);
	free(words);
	return (1);
}

static int	find_words(t_split_vars *v, char const *s, char **words, char c)
{
	while (s[v->i])
	{
		if ((unsigned char)s[v->i] != (unsigned char)c && v->nrm_fnd == 0)
		{
			v->nrm_fnd = 1;
			v->start = v->i;
		}
		else if ((unsigned char)s[v->i] == (unsigned char)c && v->nrm_fnd == 1)
		{
			v->nrm_fnd = 0;
			words[v->j] = get_word(s, v->start, v->i);
			if (!words[v->j])
				return (clear_words(words));
			v->j++;
		}
		v->i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	t_split_vars	vars;
	char			**words;

	words = malloc(sizeof(char *) * (count_words(s, (unsigned char)c) + 1));
	if (!s || !words)
		return (0);
	vars.i = 0;
	vars.j = 0;
	vars.start = 0;
	vars.nrm_fnd = 0;
	if (find_words(&vars, s, words, c) != 0)
		return (NULL);
	if (vars.nrm_fnd == 1)
	{
		words[vars.j] = get_word(s, vars.start, vars.i);
		if (!words[vars.j])
		{
			clear_words(words);
			return (0);
		}
		vars.j++;
	}
	words[vars.j] = NULL;
	return (words);
}
