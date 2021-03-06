/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sputll_dig.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:24:53 by etrobert          #+#    #+#             */
/*   Updated: 2016/12/18 14:46:36 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_base.h"

void	ft_sputll_dig(long long int n, t_base *base, char *str,
		unsigned int digits)
{
	if (n >= 0)
	{
		ft_sputull_dig((unsigned long long int)n, base, str, digits);
		return ;
	}
	str[0] = '-';
	ft_sputull_dig(-(unsigned long long int)n, base, str + 1, digits - 1);
}
