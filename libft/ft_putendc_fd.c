/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendc_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 14:00:34 by mdeken            #+#    #+#             */
/*   Updated: 2014/12/17 14:01:25 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendc_fd(char const *s, char const c, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd(c, fd);
}
