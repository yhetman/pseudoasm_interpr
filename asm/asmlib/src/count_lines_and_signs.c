/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_lines_and_signs.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 02:41:27 by yhetman           #+#    #+#             */
/*   Updated: 2019/10/07 02:52:46 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/asmlib.h"

void	count_lines_and_signs(char *content, int *signs, int *lines)
{
	while (content++)
	{
		if (*content == '\n')
			(*lines)++;
		(*signs)++;
	}
}

