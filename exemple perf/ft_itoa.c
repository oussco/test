/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:15:22 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/07 15:39:17 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static	int	ft_intlen(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n / 10)
	{
		count++;
		n = n / 10;
	}
	count++;
	return (count);
}

char	*ft_itoa(int n)
{
	char	*numb;
	int		len;
	long	temp;
	long	nb;

	nb = n;
	temp = n;
	len = ft_intlen(nb);
	if (len == 0)
		return (NULL);
	numb = malloc((sizeof(char) * len + 1));
	if (!numb)
		return (NULL);
	numb[len] = '\0';
	if (nb < 0)
		nb = -nb;
	while (len > 0)
	{
		len--;
		numb[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (temp < 0)
		numb[0] = '-';
	return (numb);
}
/*
int	main(void)
{
	char	*ans;
	int		numb = -12345;

	ans = ft_itoa(numb);
	printf("%s", ans);
	free(ans);
}
*/