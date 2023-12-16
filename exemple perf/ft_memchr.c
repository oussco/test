/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:54:14 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/02 12:34:18 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char	*string;

	string = str;
	i = 0;
	if (!string)
		return (NULL);
	while (n > 0)
	{
		if (string[i] == (unsigned char)c)
			return ((void *)&string[i]);
		i++;
		n--;
	}
	return (NULL);
}
/*
int main(void)
{
	char tableau[] = "abcdef6hhh";
	int x = 54;
	char *ptr = ft_memchr(tableau, x, 7);
	printf("%s", ptr);
}
*/