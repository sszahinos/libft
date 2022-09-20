/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:35:20 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/19 15:55:32 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void var_initializer(int *sign, int *num, int *i, int *started)
{
	*sign = 1;
	*num = 0;
	*i = 0;
	*started = 0;
}

static int is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int ft_atoi(const char *str)
{
	int i;
	int num;
	int sign;
	int started;

	var_initializer(&sign, &num, &i, &started);
	while (str[i] && started == 0 && is_num(str[i]) == 0)
	{
		if (str[i] == '-')
		{
			if (sign == -1)
				return (num);
			sign = -1;
		}
		i++;
	}
	while (is_num(str[i]) == 1)
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num * sign);
}
