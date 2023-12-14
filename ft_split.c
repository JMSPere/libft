/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:41:28 by pemateu-          #+#    #+#             */
/*   Updated: 2023/12/14 14:52:30 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	newword;

	newword = 1;
	count = 0;
	while (*s)
	{
		if (*s != c && newword == 1)
		{
			count++;
			newword = 0;
		}
		else if (*s == c)
			newword = 1;
		s++;
	}
	return (count);
}

static void	*custom_free(char **array, int length)
{
	int	i;

	i = 0;
	while (i < length)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	*p;
	char	**result;
	int		count;
	int		length;

	count = count_words(s, c);
	length = 0;
	result = malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	while (length < count)
	{
		while (*s == c && *s)
			s++;
		p = (char *)s;
		while (*s != c && *s)
			s++;
		result[length] = ft_substr(p, 0, s - p);
		if (!result[length])
			return (custom_free(result, length));
		length++;
	}
	result[length] = NULL;
	return (result);
}
