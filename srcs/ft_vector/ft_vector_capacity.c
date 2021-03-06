/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_capacity.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 18:07:55 by etrobert          #+#    #+#             */
/*   Updated: 2016/12/20 20:23:58 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

size_t		ft_vector_capacity(const t_vector *vec)
{
	if (vec == NULL)
		return (0);
	return (vec->capacity);
}
