/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:53:46 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/19 21:53:46 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int	i;
	int sign;

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

char	*ft_itoa(int value)
{
	char	*num;
	int		i;

	i = get_len(value) - 1;
	num = ft_calloc(sizeof(char), get_len(value) + 1);
	if (!num)
		return (0);
	if (value < 0)
	{
		value *= -1;
		num[0] = '-';
	}
	else if (value == 0)
	{
		num[0] = '0';
	}
	while (value > 0)
	{
		num[i--] = (char)(value % 10) + 48;
		value /= 10;
	}
	return (num);
}