/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:47:08 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/02 23:30:45 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strjoin(char const *s1, char const *s2)
{
	char *result;
	char *tmp_s1;
	char *tmp_s2;
	int i;
	
	i = 0;
	tmp_s1 = (char*) s1;
	tmp_s2 = (char*) s2;
	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (result == NULL)
		return (NULL);
	while (tmp_s1[i])
	{
		result[i] = tmp_s1[i];
		i++;
	}
	while (*tmp_s2)
	{
		printf("tmp_s2noNaka:%s\n",tmp_s2);
		result[i] = *tmp_s2;
		i++;
		tmp_s2++;
		printf("tmp_s2noNaka:%s\n",result);
	}
	*result = '\0';
	return(result);
}

int	main (void)
{
	printf("kekka:%s\n",ft_strjoin("Hello","World"));
}
