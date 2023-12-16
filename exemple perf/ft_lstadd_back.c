/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:27:40 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/06 12:35:03 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (last)
	{
		if (last->next == NULL)
		{
			last->next = new;
			return ;
		}
		else
			last = last->next;
	}
}

/*
int	main(void)
{
	t_list	*one;
	t_list	*two;
	t_list	*three;

	char	*a = "123";
	char	*b = "234";
	char	*c = "345";

	one = malloc(sizeof(t_list));
	two = malloc(sizeof(t_list));
	three = malloc(sizeof(t_list));
	one->content = a;
	two->content = b;
	three->content = c;

	one->next = two;
	two->next = NULL;

	ft_lstlast(one);
	free (one);
	free (two);
	free (three);
}
*/