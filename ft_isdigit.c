/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:18:15 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/20 16:55:20 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c);

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	char w = '4';
// 	printf("%d\n", ft_isdigit(w));
// 	printf("%d\n", isdigit(w));
// }