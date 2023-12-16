/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:24:00 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/03 12:23:51 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_check(char const cc, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == cc)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_size(char const *s1, char const *set)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (ft_check(s1[i], set) == 1)
		i++;
	if (s1[i] == '\0')
		return (0);
	while (s1[i])
	{
		i++;
		size++;
	}
	i--;
	while (ft_check(s1[i], set) == 1)
	{
		i--;
		size--;
	}
	return (size);
}

static	int	ft_stop(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	i--;
	while (ft_check(s1[i], set) == 1)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s1)
		return (NULL);
	ptr = malloc(sizeof(char) * (ft_size(s1, set) + 1));
	if (!ptr)
		return (NULL);
	while (ft_check(s1[i], set) == 1)
		i++;
	while (i <= ft_stop(s1, set))
	{
		ptr[j] = s1[i];
		j++;
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char	tab[] = "                  ";
// 	char	trim[] = " ";
// 	char	*ans;

// 	ans = ft_strtrim(tab,trim);
// 	printf("%s", ans);
// 	free(ans);
// }
