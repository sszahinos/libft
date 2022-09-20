/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:20:46 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/19 15:54:59 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

static void	var_initializer(int *sign, int *num, int *i)
{
	*sign = 1;
	*num = 0;
	*i = 0;
}

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;
	int	started;

	var_initializer(&sign, &num, &i);
	while (str[i] && started == 0 && ft_isdigit(str[i]) == 0)
	{
		if (str[i] == '-')
		{
			if (sign == -1)
				return (num);
			sign = -1;
		}
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num * sign);
}

int	main(void)
{
	printf("%d", ft_atoi(" -546"));
	return (0);
}
