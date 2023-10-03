/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 23:21:50 by pemateu-          #+#    #+#             */
/*   Updated: 2023/10/04 00:23:22 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_inset(char c, char const *set)
{
	int	i;

	i = 0;
	while (c != set[i] && set[i] != '\0')
		i++;
	if (set[i] == '\0')
		return (0);
	else
		return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	start;
	size_t			len;
	char			*str;

	i = 0;
	len = 0;
	if (ft_strncmp(s1, "", 1) == 0)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		ft_strlcpy(str, "", 1);
		return (str);
	}
	while (ft_inset(s1[i], set) == 1 && s1[i] != '\0')
		i++;
	start = (unsigned int)i;
	i = ft_strlen(s1);
	while (ft_inset(s1[i - 1], set) == 1 && i > 0)
		i--;
	len = i - start;
	str = ft_substr(s1, start, len);
	return (str);
}
