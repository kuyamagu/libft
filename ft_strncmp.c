/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:48:40 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/28 15:24:42 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp (const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_tmp;
	unsigned char	*s2_tmp;

	s1_tmp = (unsigned char*) s1;
	s2_tmp = (unsigned char*) s2;
	while (0 < n && (*s1_tmp || *s2_tmp))
	{
		if (*s1_tmp != *s2_tmp)
			return (*s1_tmp - *s2_tmp);
		s1_tmp++;
		s2_tmp++;
		n--;
	}
	return (0);
}
/*
int main (void)
{
	char	*s1 = "panda2";
	char	*s2 = "pan";
	int	i = 4;

	printf("honke:%d\n",strncmp(s1,s2,i));

	char	*s11 = "panda2";
	char	*s22 = "pan";
	int j = 4;

	printf("ft_strncmp:%d\n",ft_strncmp(s11,s22,j));
}
*/
