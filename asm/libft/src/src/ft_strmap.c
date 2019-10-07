/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:15:19 by yhetman           #+#    #+#             */
/*   Updated: 2019/09/01 19:08:54 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	i = -1;
	if (!s || !f)
		return (NULL);
	if (!(str = ft_strnew(LEN(s))))
		return (NULL);
	while (s[++i])
		str[i] = f(s[i]);
	return (str);
}
