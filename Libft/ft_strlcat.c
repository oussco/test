/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:59:59 by oba               #+#    #+#             */
/*   Updated: 2023/10/22 18:27:12 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *restrict src, size_t dstsize)
{
	size_t	compteurdest;
	size_t	compteursrc;
	size_t	len;

	compteurdest = 0;
	compteursrc = 0;
	while (dst[compteurdest] != '\0')
		++compteurdest;
	while (src[compteursrc] != '\0')
		++compteursrc;
	len = compteursrc;
	if (dstsize <= compteurdest)
		len += dstsize;
	else
		len += compteurdest;
	compteursrc = 0;
	while (src[compteursrc] != '\0' && compteurdest + 1 < dstsize)
	{
		dst[compteurdest] = src[compteursrc];
		compteurdest++;
		compteursrc++;
	}
	dst[compteurdest] = '\0';
	return (len);
}
