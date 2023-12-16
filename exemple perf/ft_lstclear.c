/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:25:04 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/03 17:07:21 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*start;
	t_list	*temp;

	start = *lst;
	temp = *lst;
	while (temp)
	{
		temp = temp->next;
		del(start->content);
		free (start);
		start = temp;
	}
	*lst = NULL;
}
