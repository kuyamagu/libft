/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:11:47 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/23 23:21:11 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strrchr(const char *s, int c)
{
	char *tmp;
	char	t;

	tmp = (char*) s;
	t = (char) c;

	while (*tmp)
		tmp++;
	if (t == '\0')
		return (tmp);
	tmp--;
	while (*tmp)
	{
		if (*tmp == t)
			return (tmp);
		tmp--;
	}
	return (NULL);
}
