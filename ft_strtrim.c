/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:27:53 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/03 22:01:57 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strtrim(char const *s1, char const *set)
{
	char *result;
	int	i;
	int	size;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1) - 1;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i--;
	size = i + 1;
	result = malloc(sizeof(char *) * size + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, size + 1);
	return (result);
}
/*
int main(void)
{
	const char *s1 = "1234AAA22331122";
	const char	*set = "1234";

	printf("kekka:%s",ft_strtrim(s1, set));
}
*/
