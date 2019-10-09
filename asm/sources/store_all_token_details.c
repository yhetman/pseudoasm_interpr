/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_all_token_details.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:12:25 by yhetman           #+#    #+#             */
/*   Updated: 2019/10/09 20:49:42 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/asm.h"

static bool	init_tokens(t_assembler *ass)
{
	int		line;
	int		count;

	line = 1;
	while (ass->stored[++line])
	{
		if (ass->stored[line][0] && validate_token(ass->stored[line][0]))
		{
			count = -1;
			while (++count < ass->count && ass->tokens[count].count > 0)
				if (!ft_strcmp(ass->tokens[count].name, ass->stored[line][0]))
					return (false);
			ass->tokens[count].count = line;
			if (!(ass->tokens[count].name = ft_strsub(ass->stored[line][0],
						0, ft_strlen(ass->stored[line][0] - 1))))
				return (false);
		}
	}
	return (true);
}

int			store_all_token_details(t_assembler *ass)
{
	int	i;

	i = -1;
	while (++i < 17)
		ass->options[i] = g_options[i];
	i = 1;
	while (ass->stored[++i] != NULL)
		if (ass->stored[i][0] && validate_token(ass->stored[i][0]))
			ass->count++;
	if (!(ass->tokens = (t_token*)malloc(sizeof(t_token) * ass->count)))
		return (great_freeing(ass, NULL));
	if (!init_tokens(ass))
		return (0);
	return (1);
}
