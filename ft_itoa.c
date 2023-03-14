/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:25:46 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/03/09 13:04:28 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	int_len(int n);
static void		itoa_rec(long int n, char *out, size_t i);

// Converts an INT to its CHAR equivalent.
char	*ft_itoa(int n)
{
	size_t	i;
	char	*output;

	i = int_len(n);
	output = ft_calloc(1 + i, sizeof(char));
	if (!output)
		return (NULL);
	itoa_rec(n, output, i);
	return (output);
}

//	Returns the amount of numbers in the INT, adding one if is negative.
static size_t	int_len(int n)
{
	if (n == -2147483648)
		return (11);
	else if (n < 0)
		return (1 + int_len(-n));
	else if (n > 9)
		return (1 + int_len(n / 10));
	else
		return (1);
}

static void	itoa_rec(long int n, char *out, size_t i)
{
	if (i > 0)
	{
		if (n == -2147483648)
		{
			out[0] = '-';
			out[1] = '2';
			itoa_rec(147483648, out, i);
		}
		else if (n < 0)
		{
			out[0] = '-';
			itoa_rec(-n, out, i);
		}
		else if (n > 9)
		{
			itoa_rec(n % 10, out, i);
			itoa_rec(n / 10, out, --i);
		}
		else
			out[i - 1] = (n + 48);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int x = -1234;
// 	char test[6];
// 	printf("%s\n", ft_itoa(x));

// 	// int size;

//  	// ft_itoa(-5859);
//  	// size = get_last_malloc_size();
//  	// printf("%d\n", size);
// }