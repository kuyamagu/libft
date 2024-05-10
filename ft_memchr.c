/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 23:14:06 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/29 22:01:48 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_tmp;
	unsigned char	c_tmp;
	size_t			i;

	s_tmp = (unsigned char *)s;
	c_tmp = (unsigned char)c;
	i = 0;
	if (n != 0)
	{
		while (s_tmp[i] != c_tmp && i < n - 1)
			i++;
	}
	if (s_tmp[i] == c_tmp)
		return (s_tmp + i);
	return (NULL);
}
/*
int	main(void)
{
	char	*s;
	char	*s1;
	char	*str;
	size_t	n;

	s = ":(){ :|: & };:";
	printf("%s\n", ft_memchr(s, '\xde', 15));
	s1 = ":(){ :|: & };:";
	printf("%s\n", memchr(s1, '\xde', 15));
 }
#include <stdlib.h>
int	main(int argc, char **argv)
{
	str = argv[1];
	n = atoi(argv[2]);
	ft_memchr(str, 'a', n);
}
*/
