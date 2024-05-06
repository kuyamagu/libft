/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 18:12:13 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/06 23:23:51 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	char	*result;
	int	digit;
	int	cnt_digit;
	int	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	cnt_digit = 0;
	digit = n;
	while (digit != 0)
	{
		cnt_digit++;
		digit /= 10;
	}
	if (n < 0)

	result = (char*) ft_calloc(1, cnt_digit + 1);
	if (n < 0)
	{
		n *=  -1;
		result[0] = '-';
	}
	i = cnt_digit;
	printf("cnt_digit:%d\n",cnt_digit);
	while (0 < i--)
	{
		printf("n:%d\n",n);
		printf("i:%d\n",i);
		result[i] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}

int main (void)
{
	int n = -124;
	printf("kekka:%s\n",ft_itoa(n));
}
