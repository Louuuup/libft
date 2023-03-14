/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:08:02 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/20 20:32:09 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	int x = 'S';
// 	printf("%c\n", tolower(x));
// 	printf("%c\n", ft_tolower(x));
// }