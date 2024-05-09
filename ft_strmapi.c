/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:39:31 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/09 20:46:11 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char*			result;
	int				len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	result = (char*) malloc(sizeof(char) * len + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while(s[i])
	{
		result[i] = f(i,s[i]);
	   i++;	
	}
	result[i] = '\0';
	return (result);
}
