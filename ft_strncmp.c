/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 02:03:48 by yakary            #+#    #+#             */
/*   Updated: 2023/02/23 17:08:35 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!s1)
		return (-1);
	if (!s2)
		return (1);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] < 0)
			return (1);
		else if (s2[i] < 0)
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		++i;
	}
	if (i != n++)
		return (s1[i] - s2[i]);
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//  char *s1 = "\200";
//  char *s2 = "\0";
//NOT WORKING MAIN BUT yeah.
// 	printf("%d\n", i1);
// 	printf("%d\n", i2);
// }