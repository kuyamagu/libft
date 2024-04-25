/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:20:10 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/25 21:57:14 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_tmp;
	unsigned char	*s2_tmp;

	size_t	i;

	if (!s1 || !s2)
		return (0);
	s1_tmp = (unsigned char*) s1;
	s2_tmp = (unsigned char*) s2;
	i = 0;
	while (s1_tmp[i] == s2_tmp[i] && n--)
		i++;
	if (n == 0)
		return (0);
	else
		return (s1_tmp[i] - s2_tmp[i]);

}

