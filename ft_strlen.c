/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:59:47 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/20 16:54:32 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s);

int	ft_strlen(const char *s)
{
	int	x;

	x = 0;
	if (s[0] == '\0')
		return (0);
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char test[] = "abcdefghijjkashdwlnmopqwxyz";
// 	printf("%d\n", ft_strlen(test));
// 	printf("%lu\n", strlen(test));
// }
