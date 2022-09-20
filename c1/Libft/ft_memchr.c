/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:31:49 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/20 10:51:56 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	uc = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == uc)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == uc)
		return ((char *)s + i);
	return (0);
}
