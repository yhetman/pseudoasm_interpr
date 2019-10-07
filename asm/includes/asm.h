/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 00:21:51 by yhetman           #+#    #+#             */
/*   Updated: 2019/10/07 04:23:54 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASM_H
# define ASM_H

#include "../asmlib/includes/asmlib.h"

/*
typedef struct			s_command
{
	char				*command;
	char				*args;
}						t_command;
*/

typedef struct			s_reader
{
	int					line;
	int					sign;
}						t_reader;

typedef struct			s_bytes
{
	int					first;
	int					last;
	int					size;
}						t_bytes;

typedef struct			s_token
{
	char				*name;
	int					count;
	t_bytes				byte;
}						t_token;

typedef struct			s_assembler
{
	char				**command;
	char				***stored;
	int					count;
	t_token				*tokens;
	t_op				op_tab[17];
}						t_assembler;

int					go_to_assembler(char *file);
int					great_initialization(t_assembler *a, int lines, char *line);
int					great_freeing(t_assembler *ass, char *line);

#endif
