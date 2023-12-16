/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:12:06 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/07 16:16:57 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static	int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;
	int		total;

	total = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	ptr = malloc(sizeof(char) * total + 1);
	if (!ptr)
		return ((void *) 0);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main(void)
{
	char tab1[] = "rank is";
	char tab2[] = " poppin!";
	char	*ans;
	ans = ft_strjoin(tab1,tab2);
	printf("%s", ans);
	free(ans);
}
*/