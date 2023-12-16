/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:11:51 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/07 15:42:29 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int			i;
	const char	*temp;

	i = 0;
	temp = NULL;
	if (!str)
		return (NULL);
	if ((char)c == 0)
	{
		while (str[i])
			i++;
		temp = &str[i];
		return ((char *)temp);
	}
	else
	{
		while (str[i])
		{
			if (str[i] == (char)c)
				temp = &str[i];
			i++;
		}
	}
	return ((char *)temp);
}
/*
int main(void)
{
	char table[] = "immortalimmitymyesss";
	char *ptr = ft_strrchr(table,109);
	printf("%s", ptr);
}
*/