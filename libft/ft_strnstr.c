/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:36:00 by pemateu-          #+#    #+#             */
/*   Updated: 2023/09/20 20:53:37 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	int		found;

	i = 0;
	found = 0;
	if (ft_strncmp(little, "", 1) == 0)
		return ((char *)big);
	while (big[i] != '\0' && found == 0 && i < len)
	{
		if (little[0] == big[i])
		{
			j = 0;
			while (little[j] != '\0' && little[j] == big[i + j]
				&& (j + i) < len)
				j++;
			if (little[j] == '\0')
				found = 1;
		}
		i++;
	}
	i--;
	if (found == 0)
		return (NULL);
	return ((char *)big + i);
}
