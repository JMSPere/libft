/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:08:54 by pemateu-          #+#    #+#             */
/*   Updated: 2023/10/05 00:51:04 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int				i;
	int				j;
	int				k;
	int				count;
	char			*duplicate;
	char			**array;

	i = 0;
	j = 0;
	k = 0;
	duplicate = ft_strtrim(s, &c);
	while (duplicate[i] != '\0')
	{
		if (duplicate[i] == c)
			j++;
		i++;
	}
	count = j + 1;
	array = (char **) malloc ((j + 1) * sizeof(char *) + sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count)
	{
		while (duplicate[i] == c && duplicate[i] != '\0')
			i++;
		while (duplicate[k + i] != c && duplicate[k + i] != '\0')
			k++;
		array[j] = ft_substr(duplicate, (unsigned int)i, (size_t)(k));
		printf("%s\n", array[j]);
		if (array[j][k] == '\0')
			printf("NULL\n");
		j++;
		i += k;
		k = 0;
	}
	array[j] = NULL;
	return (array);
}
