/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 23:14:06 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/25 22:33:35 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_tmp;
	unsigned char	c_tmp;

	if (!s)
		return (NULL);
	s_tmp = (unsigned char *) s;
	c_tmp = (unsigned char) c;
	while (*s_tmp != c_tmp && n--)
		s_tmp++;
	if (*s_tmp == c_tmp)
		return (s_tmp);
	return (NULL);
}

// int main(void)
// {
// 	char *s = ":(){ :|: & };:";
// 	printf("%s\n", ft_memchr(s, '\xde', 15));
// }
