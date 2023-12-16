/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:25:03 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/01 15:07:07 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static size_t	ft_check(const char *haystack, const char *needle, size_t index)
{
	size_t	j;

	j = 0;
	while (needle[j] == haystack[index] && needle[j])
	{
		j++;
		index++;
		if (needle[j] == '\0')
			return (1);
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen((char *)needle);
	if (n == 0)
		return ((char *)haystack);
	if (len == 0 || !haystack)
		return (NULL);
	while (haystack[i] && (i < len))
	{
		if (needle[0] == haystack[i])
		{
			if (ft_check(haystack, needle, i) == 1)
			{
				if (i + n > len)
					return (NULL);
				else
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char table1[] = "haapi happity happy-hapli happy hehe";
	char mini[] = "happy ";
	char *ptr = ft_strnstr(table1,mini,100);
	printf("%s",ptr);
}
*/