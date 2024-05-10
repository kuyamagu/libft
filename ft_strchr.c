/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:33:21 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/23 23:10:19 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;
	char	t;

	tmp = (char *)s;
	t = (char)c;
	while (*tmp && *tmp != t)
		tmp++;
	if (*tmp == t)
		return (tmp);
	return (NULL);
}
/*
int	main (void)
{
	char	*s;
	char	*ss;

	s = "asdfgh";
	ss = "asdfgh";
	printf("結果:%s\n",strchr(s, 300));
	printf("結果:%s\n",ft_strchr(ss, 300));
}
*/
