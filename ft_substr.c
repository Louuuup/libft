/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:06:28 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/27 13:28:27 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!s || (unsigned int)s_len < start)
		return (ft_strdup (""));
	if ((int)len + start > s_len)
		len = s_len - start;
	sub = (char *)ft_calloc(sizeof(char), len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, len + 1);
	sub[len] = '\0';
	return (sub);
}

// #include <stdio.h>
// #include "ft_strlcpy.c"
// #include "ft_strlen.c"
// #include "ft_strdup.c"
// #include "ft_bzero.c"
// #include "ft_calloc.c"
// #include "ft_memcpy.c"
// int main(void)
// {
// 	printf("%s\n", ft_substr("hola", 0, 18446744073709551615));
// 	printf("%s\n", ft_substr("BONJOUR LES HARICOTS !", 8, 14));
// 	printf("%s\n", ft_substr("test", 1, 2));
// 	printf("%s\n", ft_substr("tripouille", 1, 1));
// }
