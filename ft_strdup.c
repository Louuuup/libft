/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:24:43 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/03/08 15:56:52 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	if (!s1)
		return (NULL);
	str = (char *)ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	return (str);
}

// #include "ft_strlen.c"
// #include <stdio.h>
// int	main(void)
// {
// 	char test[] = "salut toi";

// 	printf("%s\n", ft_strdup(test));
// }
