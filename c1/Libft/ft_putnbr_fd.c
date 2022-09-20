/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:24:23 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/20 12:21:53 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	i;
	
	i = 0;
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static int	pow(int base, int power)
{
	int	i;
	int	result;
	
	if (power == 0)
		return (1);
	i = 1;
    result = base;
    while (i++ < power)
        result *= base;
	return (result);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	i;
	int digits;

	if (n < 0)
	{
		ft_puchar_fd('-', fd);
		n *= -1;
	}
	else if (n == 0)
		ft_putchar_fd('0', fd);
	else
	{
		digits = count_digits(n);
		i = 0;
		while (i < digits)
		{
			ft_putchar_fd(n / pow(), fd);
		}
	}


	ft_putchar_fd((char)n + 48, fd);
}
