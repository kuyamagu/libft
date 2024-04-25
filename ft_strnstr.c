/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 22:47:18 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/25 23:27:47 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char * ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*tmp_haystack;
	char	*tmp_needle;

	tmp_haystack = (char *) haystack;
	tmp_needle = (char *) needle;


}
*/
int main(void)
{
	char *h = "Hello";
	char *n = "World";
	size_t len = 3;

	printf("kekka:%s\n",strnstr(h,n,len));
}
/*
{
	char	*tmp_haystack;
	char	*tmp_needle;

	tmp_haystack = (char *) haystack;
	tmp_needle = (char *) needle;
	if (!needle)
		return (tmp_haystack);
	while (len)
	{
	 	if (*tmp_haystack == *tmp_needle)
		{
			while(*tmp_needle)
			{
				if (*tmp_haystack == *tmp_needle && *tmp_needle)
				{
					tmp_haystack++;
					tmp_needle++;
				}
				else
					return (0);
			}
			return (tmp_haystack);
		}
		len--;
	}
	return (tmp_haystack);
}
*/
