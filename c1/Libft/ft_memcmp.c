/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:34:53 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/15 14:49:45 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	memcmp(const void *s1, const void *s2, unsigned int n)
{
	int	i;
	char *s1c;
	char *s2c;

	s1c = (char*)s1;
	s2c = (char*)s2;
	i = 0;
	while (i < n)
	{
		if (s1c[i] > s2c[i])
			return (1);
		if (s1c[i] < s2c[i])
			return (-1);
		i++;
	}
	return (0);
}