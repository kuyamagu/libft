/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 23:14:06 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/24 23:27:53 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_tmp;
	unsigned char	c_tmp;

	s_tmp = (unsigned char *) s;
	c_tmp = (unsigned char) c;
	while (*s_tmp != c_tmp && n--)
		s_tmp++;
	if (*s_tmp == c_tmp)
		return (s_tmp);
	return (NULL);

}
