/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endian.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 19:41:41 by etrobert          #+#    #+#             */
/*   Updated: 2017/02/17 16:21:18 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ENDIAN_H
# define FT_ENDIAN_H

# include <stdbool.h>

bool			ft_is_big_endian(void);
int				ft_int32_big_endian(int n);
unsigned int	ft_uint32_big_endian(unsigned int n);
short			ft_short16_big_endian(short n);
unsigned short	ft_ushort16_big_endian(unsigned short n);
unsigned char	ft_uchar8_big_endian(unsigned char n);

#endif
