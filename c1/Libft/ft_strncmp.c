/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:42:26 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/19 14:54:00 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int	i;
	int				result;

	i = 0;
	while (i < n)
	{
		result = (unsigned char)s1[i] - (unsigned char)s2[i]; 
		if (result != 0)
			return result; 
		i++;
	}
	return (0);
}
