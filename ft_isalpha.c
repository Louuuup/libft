/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:18:15 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/20 16:55:29 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c);

int	ft_isalpha(int c)
{
	if ((c < 65) || (c >= 91 && c <= 96) || (c > 122))
		return (0);
	return (1);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	char w = '2';
// 	printf("%d\n", ft_isalpha(w));
// 	printf("%d\n", isalpha(w));
// }