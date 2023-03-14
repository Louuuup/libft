/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 02:29:19 by yakary            #+#    #+#             */
/*   Updated: 2023/02/24 12:36:55 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	x;
	unsigned char	*str;

	x = c;
	i = 0;
	str = (unsigned char *)s;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (str[i] == x)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	int chr = ' ';
// 	int x = 3;
// 	char test[] = "salut";
// 	printf("%s\n", (char*)memchr(test, chr, x));
// 	printf("%s\n", (char*)ft_memchr(test, chr, x));
// }