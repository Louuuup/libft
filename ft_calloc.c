/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:00:14 by yakary            #+#    #+#             */
/*   Updated: 2023/03/06 12:51:07 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

// malloc, and fills with 0s
void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}

// #include <stdio.h>
// #include "ft_memcmp.c"
// #include "ft_bzero.c"

// int main(void)
// {
// 	int size = 8539;

// 	void * d1 = ft_calloc(size, sizeof(int));
// 	void * d2 = calloc(size, sizeof(int));
// 	printf("%d\n", memcmp(d1, d2, size * sizeof(int)));

// 	free(d1);
// 	free(d2);
// }
