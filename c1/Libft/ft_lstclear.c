#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*aux_next;

	aux = *lst
	while (aux)
	{
		ft_lstdelone(aux, del);
		aux = aux->next;
	}
	*lst = 0;
}
