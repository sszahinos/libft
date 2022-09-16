/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:35:20 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/16 14:50:17 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	check_char(char c)
{
	if (is_num(c) == 1 || c == '+' || c == '-' || c == ' ')
		return (1);
	return (0);
}

static void	reset_var(int *sign, int *num, int *end, int *started)
{
	*sign = 1;
	*num = 0;
	*end = 0;
	*started = 0;
}

static int	check_end(int started, char c)
{
	if (started == 1 && is_num(c) == 0)
		return (1);
	if (started == 0 && check_char(c) == 0)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;
	int	end;
	int	started;

	i = 0;
	reset_var(&sign, &num, &end, &started);
	while (str[i] && end == 0)
	{
		if (is_num(str[i]) == 1)
		{
			num *= 10;
			num += (int)str[i] - 48;
			started = 1;
		}
		else if (str[i] == '-' && started == 0)
			sign *= -1;
		end = check_end(started, str[i]);
		i++;
	}
	num *= sign;
	return (num);
}
