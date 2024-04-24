/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:48:40 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/24 23:12:38 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_tmp;
	unsigned char	*s2_tmp;
	size_t	i;

	if (!s1 || !s2)
		return (0);
	s1_tmp = (unsigned char*) s1;
	s2_tmp = (unsigned char*) s2;
	i = 0;
	while (s1_tmp[i] == s2_tmp[i] && n-- && s1_tmp[i] && s2_tmp[i])
		i++;
	if (n == 0)
		return (0);
	else
		return (s1_tmp[i] - s2_tmp[i]);
}
/*
int main (void)
{
	char	*s1 = "panda";
	char	*s2 = "pa";
	int	i = 0;

	printf("honke:%d\n",strncmp(s1,s2,i));
}
*/
