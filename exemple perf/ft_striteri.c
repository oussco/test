/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:28:09 by dnoel             #+#    #+#             */
/*   Updated: 2023/10/27 13:07:30 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
/*
void	f2(unsigned int a, char *b)
{
	char	temp;

	temp = *b;
	if (temp == 'a')
		printf("%c, %i\n", temp, a);
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	tableau[] = "abcdefa";
	ft_striteri(tableau,f2);
}
*/