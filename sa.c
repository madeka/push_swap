#include "libft.h"

void	sa(t_list **pile)
{
	int *tmp;
	t_list	*begin;

	begin = *pile;
	while ((*pile)->next->next)
		(*pile) = (*pile)->next;
	tmp = (int *)(*pile)->next->content;
	(*pile)->next->content = (*pile)->content;
	(*pile)->content = (void *)tmp;
	*pile = begin;
}
