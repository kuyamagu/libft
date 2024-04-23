/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 22:54:40 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/20 16:20:07 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return  (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int main (void)
{
	int a = 60;
	printf("isdigitの結果：%d\n", isdigit(a));
	int	b = 60;
	printf("ft_isdigitの結果：%d\n", ft_isdigit(b));
	int	c = 1; 
	printf("isdigitの結果：%d\n", isdigit(c));
	int	d = 1; 
	printf("ft_isdigitの結果：%d\n", ft_isdigit(d));
	int	e = 0; 
	printf("isdigitの結果：%d\n", isdigit(e));
	int	f = 0; 
	printf("ft_isdigitの結果：%d\n", ft_isdigit(f));
}
*/
