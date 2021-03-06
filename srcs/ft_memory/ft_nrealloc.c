/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nrealloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:13:57 by etrobert          #+#    #+#             */
/*   Updated: 2017/03/10 19:00:07 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_nrealloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*ret;

	if ((ret = malloc(new_size)) == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL)
	{
		ft_memcpy(ret, ptr, old_size);
		free(ptr);
	}
	return (ret);
}
