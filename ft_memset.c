/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:39:54 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/27 13:51:32 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cp;

	cp = (unsigned char *)b;
	while (len--)
	{
		*cp++ = (char)c;
	}
	return (b);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	test[] = "ceci est un test";

// 	printf("%s\n", test);
// 	printf("%s\n", ft_memset(test, 51, 1));	
// 	printf("%s\n", memset(test, 51, 1));	
// }
