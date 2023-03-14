/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:33:07 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/21 13:16:59 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi_nbr(const char *str)
{
	int		n;
	char	*string;

	n = 0;
	string = (char *)str;
	while (*string >= 48 && *string <= 57)
	{
		n *= 10;
		n += (*string - 48);
		string++;
	}
	return (n);
}

int	ft_atoi(const char *str)
{
	int		neg;
	char	*string;

	string = (char *)str;
	neg = 1;
	if (*string == '\0')
		return (0);
	while (*string == 32 || (*string >= 9 && *string <= 13))
	{
		string++;
	}
	if (*string == 43)
		string++;
	else if (*string == 45)
	{
		neg = -neg;
		string++;
	}
	return (atoi_nbr(string) * neg);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	char a[] = "     + 242a3 25     ";
// 	printf("%d\n", (ft_atoi(a)));
// 	printf("%d\n", (atoi(a)));
// 	return (0);
// }
