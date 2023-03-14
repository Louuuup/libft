/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakary <yakary@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:25:40 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/03/14 15:19:45 by yakary           ###   ########.fr       */
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
