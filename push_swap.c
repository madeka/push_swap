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
	t_tree	*tree;
//	int	*tmp;

	pileb = NULL;
	pilea = create_pile(ac ,av);
	tree = create_node(pilea, pileb, NULL, -1);
	parkour_node(tree);
/*	while (tree->pileb != NULL)
	{
		tmp = (int *)tree->pileb->content;
		ft_putnbr(*tmp);
		tree->pileb = tree->pileb->next;
	}*/
	return (0);
}
