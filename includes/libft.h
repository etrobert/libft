/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:41:17 by etrobert          #+#    #+#             */
/*   Updated: 2016/12/01 18:12:51 by etrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
** Needed for NULL declaration
*/

# include <string.h>

/*
** Needed for write declaration ft_putchar...
*/

# include <unistd.h>

/*
** Needed for malloc declaration
*/

# include <stdlib.h>

/*
** Needed for variadic function ft_printf
*/

# include <stdarg.h>

/*
** Needef for INT_MIN definition ft_putnbr ft_digits
*/
# include <limits.h>

# include "ft_bool.h"
# include "ft_hlist.h"
# include "ft_slist.h"
# include "ft_printf.h"
# include "ft_base.h"
# include "ft_math.h"
# include "ft_string.h"
# include "ft_char_tools.h"

# define FT_INT_MIN -2147483648
# define FT_INT_MAX  2147483647
# define FT_INT_MIN_STR "-2147483648"
# define FT_INT_MAX_STR "2147483647"
# define FT_INT_MIN_DIG 11

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

/*
** Part 1
*/

int				ft_atoi(const char *str);

/*
** Part 2
*/

char			*ft_itoa(int n);

void			ft_putchar(char c);
void			ft_putstr(const char *str);
void			ft_putendl(const char *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(const char *s, int fd);
void			ft_putendl_fd(const char *str, int fd);
void			ft_putnbr_fd(int n, int fd);

/*
** Bonus Part
*/

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *elem);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** Individual Part
*/

int				ft_isblank(int c);
int				ft_isspace(int c);

void			*ft_memdup(const void *ptr, size_t size);

void			*ft_lstfold(t_list *lst, void *(*f)(void *, void *));

void			*ft_nrealloc(void *ptr, size_t old_size, size_t new_size);

#endif
