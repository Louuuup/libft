/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:30:38 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/03/10 19:45:09 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static void	ft_putchar(int c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar('-', fd);
		ft_putchar('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n == 0)
		ft_putchar('0', fd);
	else if (n < 0)
	{
		ft_putchar('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar(n + 48, fd);
}

static void	ft_putchar(int c, int fd)
{
	write(fd, &c, 1);
}

// #include <limits.h>

// int	main(void)
// {	
// 	ft_putnbr_fd(42, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(INT_MAX, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(INT_MIN, 1);
// 	write(1, "\n", 1);
// }
