/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:58:02 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/27 13:48:07 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*x;
	unsigned char	*y;

	x = (unsigned char *)dst;
	y = (unsigned char *)src;
	if (x == y)
		return (dst);
	if (x == (void *)0 || y == (void *)0)
		return (0);
	if (x > y && x < y + len)
	{
		x += len;
		y += len;
		while (len--)
			*(--x) = *(--y);
	}
	else
	{		
		while (len--)
			*x++ = *y++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char dst[] = "ceci est une phrase";
// 	char src[] = "wabadabadou";
// 	printf("%s\n", memmove(dst, src, strlen(src)));
// }
