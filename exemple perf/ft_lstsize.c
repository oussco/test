/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:09:31 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/06 12:35:30 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
	ft_lstsize(one);
	free (one);
	free (two);
	free (three);
}
*/