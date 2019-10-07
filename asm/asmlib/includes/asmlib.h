/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asmlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 18:52:30 by yhetman           #+#    #+#             */
/*   Updated: 2019/10/07 04:32:47 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASMLIB_H
# define ASMLIB_H

# include "op.h"
# include "macros.h"
# include <stdbool.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <stdlib.h>
# include <stdio.h>

void		count_lines_and_signs(char *content, int *signs, int *lines);
int			ft_putchar_fd(char c, int fd);
int			ft_putstr_fd(const char *s, int fd);
int			ft_putchar_fd(char c, int fd);
int			ft_putstr_fd(const char *s, int fd);
void		ft_bzero(void *s, size_t n);
char		*ft_strdup(const char *src);
size_t		ft_strlen(const char *str);
void		ft_strdel(char **as);
char		*ft_strnew(size_t size);

#endif
