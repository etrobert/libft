/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_it_inc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 17:15:14 by etrobert          #+#    #+#             */
/*   Updated: 2017/01/23 17:36:45 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_set.h"

void			ft_set_it_inc(t_set_it *it)
{
	*it = ft_set_it_next(*it);
}
