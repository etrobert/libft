/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_it_get.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 18:00:34 by etrobert          #+#    #+#             */
/*   Updated: 2017/01/12 10:59:53 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void			*ft_list_it_get(const t_list *list, t_list_it it)
{
	(void)list;
	if (it == NULL)
		return (NULL);
	return (it->val);
}
