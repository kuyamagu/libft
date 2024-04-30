/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:11:26 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/29 23:31:19 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_substr(char const *s, unsigned int start,size_t len)
{
	char *result;
	size_t	i;

	if (start >= ft_strlen(s) || len == 0)
		return ((char*) s + ft_strlen(s));
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (s[start] != '\0')
			result[i] = s[start];
		else
			return (result);
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}
/*
int main(void)
{
	char *s = "libft-test-tokyo";
	printf("kekka:%s\n",ft_substr(s,5,100));
}
*/
