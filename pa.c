#include "libft.h"
#include <stdlib.h>

void	pa(t_list **pilea, t_list **pileb)
{
	t_list	*begin;
	t_list	*tmp;

	begin = *pileb;
	tmp = *pileb;
	while (begin->next != NULL)
		begin = begin->next;
	while (tmp->next != begin)
		tmp = tmp->next;
	ft_lstaddback(pilea, begin);
	tmp->next = NULL;
}
