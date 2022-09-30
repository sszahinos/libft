/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:29:25 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/27 16:43:47 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
