/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:44:31 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/27 14:29:09 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;
	size_t	slength;
	size_t	dlength;

	dlength = 0;
	x = 0;
	y = 0;
	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	while (dst[y])
		y++;
	dlength = y;
	slength = ft_strlen(src);
	if (dstsize == 0 || dstsize <= dlength)
		return (slength + dstsize);
	while (src[x] != '\0' && y < dstsize - 1)
	{
		dst[y] = src[x];
		x++;
		y++;
	}
	dst[y] = '\0';
	return (dlength + slength);
}

// #include <stdio.h>
// #include <string.h>
// #include "ft_strlen.c"

// int	main(void)
// {
// 	int n = 3;
// 	char x[] = "hellooooowooo";
// 	char x1[] = "hellooooowooo";
// 	char y[] = "salutcommentcava";
// 	char y1[] = "salutcommentcava";
// 	printf("%lu\n", strlcat(x, y, n));
// 	printf("%s\n", x);
// 	printf("%s\n", y);
// 	printf("\n");
// 	printf("%lu\n", max);
// 	printf("%s\n", x1);
// 	printf("%s\n", y1);
// 	return (0);
// }
