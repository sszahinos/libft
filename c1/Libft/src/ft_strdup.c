/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:29:25 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/16 14:59:46 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*strcp;

	i = 0;
	while (s1[i])
		i++;
	strcp = malloc(sizeof(char) * i);
	if (!strcp)
		return (0);
	i = 0;
	while (s1[i])
	{
		strcp[i] = s1[i];
		i++;
	}
	strcp[i] = s1[i];
	return (strcp);
}
