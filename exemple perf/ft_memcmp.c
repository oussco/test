/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:01:00 by dnoel             #+#    #+#             */
/*   Updated: 2023/10/31 12:55:51 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*source;

	source = (unsigned char *)src;
	dst = (unsigned char *)dest;
	i = 0;
	if (!dst || !source)
		return (0);
	while (i < n)
	{
		if (source[i] != dst[i])
			return (dst[i] - source[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char tab1[] = "ABCD";
	char tab2[] = "ABCDe";

	int ans = memcmp(tab1,tab2,5);
	int ans2 = ft_memcmp(tab1,tab2,5);
	printf("%i , %i ", ans, ans2);
}
*/