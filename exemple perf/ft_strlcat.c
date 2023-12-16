/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:47:01 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/07 16:07:01 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	slen = 0;
	i = 0;
	if (!src || !dst)
		return ('\0');
	while (dst[dlen] && dlen < dstsize)
		dlen++;
	while (src[slen])
		slen++;
	if (dlen >= dstsize)
		return (dlen + slen);
	while (src[i] && (i + dlen + 1) < dstsize)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (slen + dlen);
}
/*
int	main(void)
{
	char tab1[] = "alo";
	char tab2[1] = "";
	size_t dstsize = 3;
	size_t ans;
	ans = ft_strlcat(tab1,tab2, dstsize);
	printf("%zu\n", ans);
	printf("%zu", strlcat(tab1, tab2, dstsize));
}
*/