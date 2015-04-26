#include "libft.h"

void	ra(t_list **pile)
{
	t_list	*begin;
	t_list	*end;
	t_list	*prev_end;

	begin = *pile;
	end = *pile;
	prev_end = *pile;
	while (end->next != NULL)
		end = end->next;
	while (prev_end->next != end)
		prev_end = prev_end->next;
	prev_end->next = NULL;
	end->next = begin;
	*pile = end;
}
