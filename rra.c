#include "libft.h"

void	rra(t_list **pile)
{
	t_list	*begin;

	begin = *pile;
	*pile = (*pile)->next;
	begin->next = NULL;
	ft_lstaddback(pile, begin);
}
