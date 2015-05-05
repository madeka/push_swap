/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 17:36:29 by mdeken            #+#    #+#             */
/*   Updated: 2015/05/05 17:54:43 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclr(t_list **alst)
{
//	t_list *first;

	if (alst != NULL)
	{
		//first = *alst;
		while ((*alst)->next != NULL)
		{
			ft_lstclrone(alst);
		}
		*alst = NULL;
	}
}
