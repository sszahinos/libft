/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:46:57 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/24 15:37:21 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		lens2;
	int		i;
	int		j;
	char	*new_word;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	new_word = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!new_word)
		return (0);
	i = -1;
	while (s1[++i])
		new_word[i] = s1[i];
	j = 0;
	while (s2[j])
	{
		new_word[i] = s2[j];
		i++;
		j++;
	}
	new_word[i] = '\0';
	return (new_word);
}
