/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 18:12:13 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/05 20:34:04 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	int	i;
	char *tmp;

	i = 1;
	char *result = malloc(sizeof(char *) * n);
	if (n = -2147483648)
		*result = "-2147483648";
	else if (n < 0)
		n *=  -1;
	result[0] = '-';
	while (n > 0)
	{
		tmp[i] = n % 10;
		i++;
	}
	return (tmp);
}

int main (void)
{
	int n = 12345;
	printf("kekka:%s\n",ft_itoa(n));
}
