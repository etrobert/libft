/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_it_advance.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 17:58:44 by etrobert          #+#    #+#             */
/*   Updated: 2016/12/15 19:04:22 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void			ft_list_it_advance(t_list_it *it, t_distance n)
{
	if (it == NULL)
		return ;
	while (n > 0)
	{
		ft_list_it_inc(it);
		n--;
	}
}
