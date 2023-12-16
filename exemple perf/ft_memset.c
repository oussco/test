/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:53:50 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/07 15:58:13 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	char	*ptr;

	if (!str)
		return (NULL);
	i = 0;
	ptr = str;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char tableau[] = "allo lool";
	int n;
	int c;
	
	c = 78;
	n = 3;
	printf("%s, %s", ft_memset(tableau, c, n), memset(tableau,c,n)) ;
}
*/