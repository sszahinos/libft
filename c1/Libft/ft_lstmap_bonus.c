/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:29:10 by sersanch          #+#    #+#             */
/*   Updated: 2022/09/27 12:45:24 by sersanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;
	void	*aux;

	if (!lst)
		return (0);
	new_list = NULL;
	while (lst)
	{
		aux = f(lst->content);
		new_node = ft_lstnew(aux);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			free(aux);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
