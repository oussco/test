/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoel <dnoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:45:48 by dnoel             #+#    #+#             */
/*   Updated: 2023/10/27 13:03:43 by dnoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	tab[20];
	long	nb;
	int		i;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	while (nb / 10)
	{
		tab[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	tab[i] = nb % 10 + '0';
	i++;
	tab[i] = '\0';
	while (i > 0)
	{
		i--;
		write(fd, &tab[i], 1);
	}
}
/*
int	main(void)
{
	int	fd;
	int	num = -206636;
	fd = open("/Users/dnoel/42Q/libft/allo.txt", O_RDWR);
	ft_putnbr_fd(num, fd);
}
*/