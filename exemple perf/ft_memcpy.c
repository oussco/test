/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:15:00 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/07 16:07:15 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
		return (dest);
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned const char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	char tableau[] = "Mage Hunter Rogue";
	char desti[17] = "12345678901234567";
	char *ptr2 = tableau;
	char *ptr1 = desti;
	

	printf("%s\n",ft_memcpy(ptr1,ptr2, 6));
	printf("%s", memcpy(ptr1,ptr2,6));
}
*/