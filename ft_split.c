/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:08:54 by pemateu-          #+#    #+#             */
/*   Updated: 2023/12/14 14:35:40 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_all_delimitations(char const *s, char c)
{
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != c)
			return (1);
	}
	return (0);
}

static int	words_number(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c)
			j++;
		i++;
	}
	if (!check_all_delimitations(s, c))
		return (0);
	if (s)
		j++;
	return (j);
}

static void	custom_free(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	**do_split(char **array, char const *duplicate, char c)
{
	int				i;
	int				j;
	int				k;

	i = 0;
	j = 0;
	k = 0;
	while (j < words_number(duplicate, c))
	{
		while (duplicate[i] == c && duplicate[i] != '\0')
			i++;
		while (duplicate[k + i] != c && duplicate[k + i] != '\0')
			k++;
		array[j] = ft_substr(duplicate, (unsigned int)i, (size_t)(k));
		if (!array[j])
		{
			custom_free(array);
			return (NULL);
		}
		j++;
		i += k;
		k = 0;
	}
	array[j] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char			*duplicate;
	char			**array;

	array = NULL;
	if (ft_strncmp(s, "", 1) == 0)
	{
		array = (char **) malloc(sizeof(char *));
		if (!array)
			return (NULL);
		array[0] = NULL;
		return (array);
	}
	duplicate = ft_strtrim(s, &c);
	if (!duplicate)
		return (NULL);
	array = (char **) malloc (words_number(duplicate, c)
			* sizeof(char *) + sizeof(char *));
	if (!array)
		return (NULL);
	array = do_split(array, duplicate, c);
	if (!array)
		return (NULL);
	free(duplicate);
	return (array);
}
