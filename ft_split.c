/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:39:56 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/03/10 18:52:45 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char		**split_create(const char *str, char c, char **out);
static size_t	split_count(const char *str, char c);
static void		*ft_free(char **split, size_t j);

// Splits into multiple strings, based on the C splitter.
char	**ft_split(char const *s, char c)
{
	size_t	splits;
	char	**output;

	splits = split_count(s, c);
	output = (char **)malloc((splits + 1) * sizeof(char *));
	if (!output)
		return (NULL);
	return (split_create(s, c, output));
}

// Counts the amounts of splitters and adds 1
// (Result: nb of parts splited)
static size_t	split_count(const char *str, char c)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (str == 0 || str[0] == 0)
		return (0);
	while (str[i])
	{
		if (str[i] != c)
		{
			x++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (x);
}

// (c)Mallocs and outputs a new string from source untill splitter. 
static char	**split_create(const char *str, char c, char **out)
{
	size_t	i;
	size_t	j;
	int		len;

	i = 0;
	j = 0;
	len = -1;
	while (i <= (size_t)ft_strlen(str))
	{
		if (str[i] != c && len < 0)
			len = i;
		else if ((str[i] == c || i == (size_t)ft_strlen(str)) && len >= 0)
		{
			out[j] = ft_substr(str, len, i - len);
			if (!out[j++])
				return (ft_free(out, j));
			len = -1;
		}
		i++;
	}
	out[j] = NULL;
	return (out);
}

static void	*ft_free(char **split, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
		free(split[i++]);
	free(split);
	return (NULL);
}

// #include <stdio.h>
// #include "ft_calloc.c"
// #include "ft_bzero.c"
// #include "ft_strdup.c"
// #include "ft_strlen.c"
// #include "ft_strlcpy.c"
// #include "ft_substr.c"
// #include "ft_memcpy.c"

// int main(void)
// {
// 	char splitter = '\0';
// 	char test[] = "\0aa\0bbb";
// 	char **out = ft_split(test, splitter);
// 	printf("OUT0:%s\n", out[0]);
// 	printf("OUT1:%s\n", out[1]);
// 	// printf("OUT2:%s\n", out[2]);
// 	// printf("OUT3:%s\n", out[3]);
// 	// printf("OUT3:%s\n", out[4]);
// 	// printf("OUT3:%s\n", out[5]);
// }
