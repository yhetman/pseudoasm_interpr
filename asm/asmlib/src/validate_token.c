/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_token.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:32:38 by yhetman           #+#    #+#             */
/*   Updated: 2019/10/07 18:42:22 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/asmlib.h"

bool	validate_token(char *line)
{
	if (!(ft_strchr(LABEL_CHARS, line[0])) || !(ft_strchr(line, ':')))
		return (false);
	while (line && *line != ':')
	{
		if (!(ft_strchr(LABEL_CHARS, *line)))
			return (false);
		line++;
	}
	return (true);
}