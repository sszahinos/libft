/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:31:49 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/16 15:02:46 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	uc = (unsigned char)c + '0';
	i = 0;
	while (s[i])
	{
		if (s[i] == uc)
			return (&s[i]);
		i++;
	}
	if (s[i] == uc)
		return (&s[i]);
	return (0);
}
