/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:25:40 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/03/09 13:07:24 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// Fills with 0s
void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*cp;

	cp = (unsigned char *)s;
	while (n--)
	{
		*cp++ = 0;
	}
	return (s);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	test[] = "ceci est un test";

// 	printf("%s\n", test);
// 	printf("%s\n", ft_bzero(test, 2));	
// 	printf("%s\n", bzero(test, 2));	
// }