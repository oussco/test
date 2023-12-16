/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:19:50 by dnoel             #+#    #+#             */
/*   Updated: 2023/10/27 16:14:32 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*dest;
	unsigned char	*temp;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dest == NULL || source == NULL)
		return (NULL);
	if (n == 0 || dest == source)
		return (dest);
	if (source < dest && dest < source + n)
	{
		temp = dest + n - 1 ;
		source = source + n - 1;
		while (n--)
			*temp-- = *source--;
	}
	else
	{
		temp = dest;
		while (n--)
			*temp++ = *source++;
	}
	return (dest);
}
/*
int main(void)
{
	char tab1[] = "hello    ";
	char tab2[] = "";
	char *ptr = ft_memmove(tab1,tab2,8);
	char *ptr1 = memmove(tab1,tab2,8);
	printf("%s, %s", ptr,ptr1);
}
*/