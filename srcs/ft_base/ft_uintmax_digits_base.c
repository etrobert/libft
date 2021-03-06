/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ull_digits_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 14:29:38 by etrobert          #+#    #+#             */
/*   Updated: 2016/12/03 17:23:33 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_base.h"

unsigned int	ft_uintmax_digits_base(uintmax_t n, unsigned int base)
{
	unsigned int	a;

	a = 1;
	while (n >= (unsigned long long int)base)
	{
		a++;
		n /= base;
	}
	return (a);
}
