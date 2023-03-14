/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:37:33 by yakary            #+#    #+#             */
/*   Updated: 2023/02/24 15:02:55 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	x;

	if (!s)
		return (NULL);
	x = c;
	len = ft_strlen(s);
	s += len;
	if (x == '\0' && *s == '\0')
		return ((char *)s);
	while (len >= 0)
	{
		if (*s == x)
			return ((char *)s);
		s--;
		len--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// #include "ft_strlen.c"

// int main(void)
// {
//  	char *s = "\0";
//  	char *d1 = strrchr(s, 'a');
//  	char *d2 = ft_strrchr(s, 'a');
// 	printf("%s\n", d1);
// 	printf("%s\n", d2);
// }
