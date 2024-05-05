/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:27:53 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/05 20:57:33 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strtrim(char const *s1, char const *set)
{
	char *result;
	size_t	i;
	int	size;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
//	if (*s1 == '\0')
//		return ("");
	i = ft_strlen(s1);
	while (0 <= i && ft_strchr(set, s1[i]) && s1[i] != '\0')
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
	const char *s1 = "111222333AAA1122A333444";
	const char	*set = "1234A";

	printf("kekka:%s",ft_strtrim(s1, set));
}
*/
