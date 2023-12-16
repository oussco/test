/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:35:22 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/06 13:53:35 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_add(t_list **new_lst, t_list **new_tail, t_list *new_node)
{
	if (!(*new_lst))
	{
		*new_lst = new_node;
		*new_tail = *new_lst;
	}
	else
	{
		(*new_tail)->next = new_node;
		*new_tail = (*new_tail)->next;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_tail;
	t_list	*new_node;

	new_lst = NULL;
	new_tail = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_node = malloc(sizeof(t_list));
		if (!new_node)
			return (ft_lstclear(&new_lst, del), NULL);
		new_node->content = f(lst->content);
		new_node->next = NULL;
		ft_add(&new_lst, &new_tail, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
