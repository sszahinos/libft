/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:28:58 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/24 10:29:00 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	int	size;
	int	i;
	t_list	*last;

	size = ft_lstsize(lst);
	last = lst; //lst vacio?
	i = 0;
	while (i++ < size)
		last = last->next;
	return (last);
}
