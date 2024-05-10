/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 05:56:21 by kuyamagu          #+#    #+#             */
/*   Updated: 2024/05/11 08:01:05 by kuyamagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list *result;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f (lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&result,del);
			return (NULL);
		}
		ft_lstadd_back(&result,new_node);
		lst = lst->next;
	}
	return (result);
}
