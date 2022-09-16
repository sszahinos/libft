/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:00:51 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/16 15:01:56 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	int		i;
	char	*dstc;
	char	*srcc;

	dstc = (char *)dst;
	srcc = (char *)src;
	i = 0;
	while (i < n)
	{
		dstc[i] = srcc[i];
		i++;
	}
	dst = (void *)dstc;
	return (dst);
}
