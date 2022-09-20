/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:53:46 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/20 11:49:27 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	else if (n == 0)
		return (2);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i + sign);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		i;
	i = get_len(n) - 1;
	num = malloc(sizeof(char) * (get_len(n) + 1));
	if (!num)
		return (0);
	if (n < 0)
	{
		n *= -1;
		num[0] = '-';
	}
	else if (n == 0)
	{
		num[0] = '0';
	}
	while (n > 0)
	{
		num[i--] = (char)(n % 10) + 48;
		n /= 10;
	}
	return (num);
}
