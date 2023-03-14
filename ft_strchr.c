/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:37:33 by yakary            #+#    #+#             */
/*   Updated: 2023/02/28 14:31:11 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"
char	*ft_strchr(const char *s, int c)
{
	char	x;

	x = c;
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == x)
			return ((char *)s);
		s++;
	}
	if (x == '\0')
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//  	char *s = "tripouille";
//  	char *d1 = strchr(s, 't' + 256);
//  	char *d2 = ft_strchr(s, 't' + 256);
// 	printf("%s\n", d1);
// 	printf("%s\n", d2);
// }
