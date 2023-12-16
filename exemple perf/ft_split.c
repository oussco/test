/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:35:27 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/03 12:23:30 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static	void	ft_free(char **arrayz)
{
	int	i;

	i = 0;
	while (arrayz[i])
	{
		free (arrayz[i]);
		i++;
	}
	free (arrayz);
}

static	int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	word;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			word++;
		while (s[i] != c && s[i])
			i++;
	}
	return (word);
}

static	char	*ft_word(char const *s, char c, int *i)
{
	int		j;
	int		k;
	char	*str;

	j = *i;
	k = 0;
	while (s[*i] != c && s[*i])
		(*i)++;
	str = malloc(sizeof(char) * (*i - j + 1));
	if (!str)
		return (NULL);
	while (j < *i)
	{
		str[k] = s[j];
		k++;
		j++;
	}
	str[k] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**arrayz;
	int		i;
	int		total;
	int		word;

	total = ft_wordcount(s, c);
	i = 0;
	word = 0;
	if (!s)
		return (NULL);
	arrayz = malloc(sizeof(char *) * (total + 1));
	if (!arrayz)
		return (NULL);
	while (s[i] && word < total)
	{
		while (s[i] == c && s[i])
			i++;
		arrayz[word] = ft_word(s, c, &i);
		if (!arrayz[word])
			return (ft_free(arrayz), NULL);
		word++;
	}
	arrayz[word] = NULL;
	return (arrayz);
}

// int	main(void)
// {
// 	char	tab[] = "allo!:)";
// 	char	trim = ' ';
// 	char	**chad = ft_split(tab,trim);
// 	if (!chad)
// 		return ((int)NULL);
// 	int	i = 0;
// 	while (chad[i] != NULL)
// 	{
// 		printf("%s\n", chad[i]);
// 		free(chad[i]);
// 		i++;
// 	}
// 	free(chad);
// 	printf("%i",ft_wordcount(tab, trim));
// }