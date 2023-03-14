/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:01:32 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/03/13 15:30:05 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	*y;

	if (!dst || !src)
		return (dst);
	i = 0;
	x = (unsigned char *)dst;
	y = (unsigned char *)src;
	while (i < n)
	{
		*x++ = *y++;
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char dst[] = "ceci est une phrase";
// 	char src[] = "wabadabadou";
// 	printf("%s\n", memcpy(dst, src, 15));
// 	char dst1[] = "ceci est une phrase";
// 	printf("%s\n", ft_memcpy(dst1, src, 3));
// }