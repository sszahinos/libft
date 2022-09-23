#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;
	t_list	*aux;

	aux = lst;
	count = 0;
	while (aux->next)
	{
		aux = aux->next;
		count++;
	}
	return (count);
}
