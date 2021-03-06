/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:14:18 by etrobert          #+#    #+#             */
/*   Updated: 2017/01/18 17:10:47 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_atoi(const char *str)
{
	long int	n;
	int			neg;

	if (str == NULL)
		return (0);
	while (ft_isspace(*str))
		str++;
	neg = 1;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	n = 0;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + *str - '0';
		str++;
	}
	return ((int)neg * n);
}
