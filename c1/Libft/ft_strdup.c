/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:29:25 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/27 16:43:37 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strdup(const char *s1)
{
	char	*strcp;
	int		size;

	size = ft_strlen(s1);
	strcp = malloc(sizeof(char) * (size + 1));
	if (!strcp)
		return (0);
	strcp = (char *)ft_memcpy(strcp, s1, size + 1);
	return (strcp);
}
