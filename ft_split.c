/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 22:02:48 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/06 21:54:21 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s,char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c)
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static int	count_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char** all_free(char** result, int words_num)
{
	while ( 0 <= words_num--)
		free(result[words_num]);
	free(result);
	return (NULL);
}
char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		words_num;
	int		len;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char*) * (count_words(s,c) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	words_num = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		{
			len = count_word(s + i, c);
			result[words_num] = (char *)malloc(sizeof(char) * (len + 1));
			if (result[words_num] == NULL)
				return (all_free(result,words_num));
			ft_strlcpy(result[words_num], s + i, len + 1);
			words_num++;
			i += len;
		}
		else
			i++;
	}
	result[words_num] = NULL;
	return (result);
}
/*
int main(void)
{
//	char *a = "sABC EFGH IJKL P";
//	char c = ' ';
	char** result = ft_split("\0aa\0bbb", '\0');
	int i = 0;
	while(result[i])
	{
		printf("kekka%s\n",result[i]);
		i++;
	}
}
*/
