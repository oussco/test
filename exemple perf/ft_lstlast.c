/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:20:19 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/03 16:38:47 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		else
			lst = lst->next;
	}
	return (lst);
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
	two->next = three;
	three->next = NULL;
	ft_lstlast(one);
	free (one);
	free (two);
	free (three);
}
*/