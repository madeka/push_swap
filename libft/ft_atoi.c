/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:18:47 by mdeken            #+#    #+#             */
/*   Updated: 2014/11/10 19:20:29 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_valid(const char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int number;
	int is_negative;

	number = 0;
	is_negative = 0;
	while (*str != '\0' && is_valid(*str))
		str++;
	if (*str == '-')
	{
		is_negative = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str != '\0' && ft_isdigit(*str))
	{
		number *= 10;
		number += (*str - '0');
		str++;
	}
	if (is_negative)
		number *= -1;
	return (number);
}
