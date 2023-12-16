/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:37:12 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/06 12:35:19 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		if (del)
		{
			(*del)(lst->content);
			free(lst);
		}
	}
}

// int	main(void)
// {
// 	t_list	*one;
// 	t_list	*two;
// 	t_list	*three;

// 	char	*a = "123";
// 	char	*b = "234";
// 	char	*c = "345";

// 	one = malloc(sizeof(t_list));
// 	two = malloc(sizeof(t_list));
// 	three = malloc(sizeof(t_list));
// 	one->content = a;
// 	two->content = b;
// 	three->content = c;

// 	one->next = two;
// 	two->next = three;
// 	three->next = NULL;
// 	ft_lstlast(one);
// 	free (one);
// 	free (two);
// 	free (three);
// }
