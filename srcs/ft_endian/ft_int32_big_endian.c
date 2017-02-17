/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int32_big_endian.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:13:21 by etrobert          #+#    #+#             */
/*   Updated: 2017/02/12 20:14:27 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_endian.h"

int			ft_int32_big_endian(int n)
{
	if (ft_is_big_endian())
		return (n);
	return (((n & 255) << 24) +
			(((n >> 8) & 255) << 16) +
			(((n >> 16) & 255) << 8) +
			((n >> 24) & 255));
}