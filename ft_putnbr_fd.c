/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:24:23 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/27 16:43:39 by sersanch         ###   ########.fr       */
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

static int	ft_pow(int base, int power)
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

static int	print_max(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return (1);
	}
	else if (n == 2147483647)
	{
		ft_putstr_fd("2147483647", fd);
		return (1);
	}
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	i;
	int	digits;

	if (print_max(n, fd) == 1)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
	{
		digits = count_digits(n) - 1;
		i = 0;
		while (i < digits)
		{
			ft_putchar_fd((char)((n / ft_pow(10, digits--) % 10) + 48), fd);
		}
		ft_putchar_fd((n % 10) + 48, fd);
	}
}
