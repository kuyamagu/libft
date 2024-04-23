/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:33:21 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/21 23:31:08 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char *tmp;

	tmp = (char *)s;
	if (!ft_isascii(c))
		return (NULL);
	if (c == '\0')
	{
		while(*tmp)
			tmp++;
		return (tmp);
	}
	else
	{
		//tmpが'\0'じゃない　かつ　tmpの値とcの値が一致しないとき次に進む
		while (*tmp && *tmp != c)
			tmp++;
		if (tmp == c )
			return (tmp);
		else
			return (NULL);
	}
}
