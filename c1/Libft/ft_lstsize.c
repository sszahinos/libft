/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:29:25 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/24 14:41:51 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*aux;

	aux = lst;
	if (!lst)
		return (0);
	count = 1;
	while (aux->next)
	{
		aux = aux->next;
		count++;
	}
	return (count);
}
