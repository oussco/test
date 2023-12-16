/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:33:19 by dnoel             #+#    #+#             */
/*   Updated: 2023/11/07 15:36:28 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	number;

	number = 0;
	sign = 1;
	i = 0;
	if (!str)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number + str[i] - '0') * 10;
		i++;
	}
	number = number / 10;
	number = number * sign;
	return (number);
}
/*
int main(void)
{
    char tableau[] = "     \n \n \n \n  645 ";
    printf("%i\n", ft_atoi(tableau));
    printf("%i\n", atoi(tableau));
}
*/