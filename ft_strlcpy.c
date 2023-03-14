/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:07:23 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/27 13:55:26 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>
// #include "ft_strlen.c"
// int main(void)
// {
// 	char dst[] = "ceci est une phrase";
// 	char src[] = "wabadabadou";
// 	printf("%lu\n", strlcpy(dst, src, ft_strlen(dst)));
// 	printf("%s\n", dst);
// 	printf("me:\n");
// 	char dst1[] = "ceci est une phrase";
// 	printf("%lu\n", ft_strlcpy(dst1, src, 3));
// 	printf("%s\n", dst1);
// }
// int	main(void)
// {
// 	int s = 4;
// 	char x[] = "hellooooowooo";
// 	char x1[] = "hellooooowooo";
// 	char y[] = "salutcommentcava";
// 	char y1[] = "salutcommentcava";
// 	printf("%lu\n", strlcpy(y, x, s));
// 	printf("%s\n", x);
// 	printf("%s\n", y);
// 	printf("mine:\n");
// 	printf("%lu\n", ft_strlcpy(y1, x1, s));
// 	printf("%s\n", x1);
// 	printf("%s\n", y1);
// 	return (0);
// }
