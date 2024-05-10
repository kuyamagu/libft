/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <kuyamagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 03:28:21 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/11 07:43:02 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp_lst;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp_lst = *lst;
	while (tmp_lst)
		tmp_lst = tmp_lst->next;
	tmp_lst->next = new;
}
