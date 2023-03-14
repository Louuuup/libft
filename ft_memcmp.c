/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:03:18 by yakary            #+#    #+#             */
/*   Updated: 2023/02/20 16:55:07 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (a && b && n--)
	{
		if (*a != *b)
		{
			return (*a - *b);
		}
		a++;
		b++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	int x = 5;
// 	char a[] = "this Is a test";
// 	char b[] = "this is a test";
// 	printf("%d\n", memcmp(a, b, x));
// 	printf("%d\n", ft_memcmp(a, b, x));
// }