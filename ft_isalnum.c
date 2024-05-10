/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:11:35 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/20 16:22:19 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	if ((48 <= c && c <= 57) || (65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	return (0);
}

// int main (void)
// {
// 	int a = 60;
// 	printf("isalnumの結果：%d\n", isalnum(a));
// 	int	b = 60;
// 	printf("ft_isalnumの結果：%d\n", ft_isalnum(b));
// 	int	c = 1;
// 	printf("isalnumの結果：%d\n", isalnum(c));
// 	int	d = 1;
// 	printf("ft_isalnumの結果：%d\n", ft_isalnum(d));
// 	int	e = 0;
// 	printf("isalnumの結果：%d\n", isalnum(e));
// 	int	f = 0;
// 	printf("ft_isalnumの結果：%d\n", ft_isalnum(f));
// }
