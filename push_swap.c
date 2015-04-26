#include "push.h"
#include "libft.h"

t_list	*create_pile(int ac, char **av)
{
	int	i;
	int	tmp;
	t_list	*list;

	list = NULL;
	i = 0;
	while (++i < ac)
	{
		tmp = ft_atoi(av[i]);
		ft_lstaddback(&list, ft_lstnew(&tmp, sizeof(int)));
	}
	return (list);
}

int	main(int ac, char **av)
{
	t_list *pilea;
	t_list *pileb;
	int	*tmp;

	pileb = NULL;
	pilea = create_pile(ac ,av);
	rra(&pilea);
	while (pilea != NULL)
	{
		tmp = (int *)pilea->content;
		ft_putnbr(*tmp);
		ft_putchar(' ');
		pilea = pilea->next;
	}
	ft_putchar('\n');
	while(pileb != NULL)
	{
		tmp = (int *)pileb->content;
		ft_putnbr(*tmp);
		ft_putchar(' ');
		pileb = pileb->next;
	}
	return (0);
}
