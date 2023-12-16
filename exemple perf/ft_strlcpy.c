/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:57:32 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/07 16:06:10 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!src)
		return ('\0');
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
/*
int main(void)
{
	char tab[4] = "12df";
	int size = 6;
	char tab1[] = "abcd655";
	size_t a = ft_strlcpy(tab,tab1,size);
	printf("%lu\n",a);
	printf("%lu", strlcpy(tab, tab1, 4));
}
*/