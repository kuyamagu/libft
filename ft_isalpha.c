/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:06:08 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/04/20 16:19:49 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isupper(int c);
int	ft_islower(int c);

int	ft_isalpha(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	else
		return (0);
}
/*
int	main(void){

int	i = 0;
while(i <= 1024)
{
	if (isalpha(i) == ft_isalpha(i))
		printf("OK%d\n",i);
	i++;
}
}
*/
