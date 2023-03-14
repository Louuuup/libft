/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:06:56 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/23 21:11:29 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (!*nee)
		return ((char *)hay);
	while (hay[x] != '\0' && x < len)
	{
		y = 0;
		while ((nee[y] == hay[x + y] && x + y < len))
		{
			if (nee[y + 1] == '\0')
				return ((char *)hay + x);
			y++;
		}
		x++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// #include "ft_strlen.c"
// #include "ft_strncmp.c"

// int	main(void)
// {
//  	char *s1 = "MZIRIBMZIRIBMZE123";
//  	char *s2 = "MZIRIBMZE";
//  	size_t max = strlen(s2);
//  	char *i1 = ft_strnstr(s1, s2, max);
//  	char *i2 = strnstr(s1, s2, max);
// 	printf("%s\n", i1);
// 	printf("expected:\n");
// 	printf("%s\n", i2);
// }
