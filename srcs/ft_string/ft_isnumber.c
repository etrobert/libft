/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeldame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 11:28:17 by tbeldame          #+#    #+#             */
/*   Updated: 2017/03/16 19:04:14 by tbeldame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>

bool	ft_isnumber(char *str)
{
	if (str == NULL)
		return (false);
	if (*str == '-' || *str == '+')
		++str;
	if (!ft_str_test_chars(str, &ft_isdigit)
			return (false);
	return (true);
}
