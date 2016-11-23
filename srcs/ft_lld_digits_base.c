/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lld_digits_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 16:05:13 by etrobert          #+#    #+#             */
/*   Updated: 2016/11/23 16:54:54 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lld_digits_base(long long int n, unsigned int b)
{
	return ((n < 0) ? 1 + ft_llu_digits_base((unsigned long long int)-n, b) :
			ft_llu_digits_base((unsigned long long int)n, b));
}
