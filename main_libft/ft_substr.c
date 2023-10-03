/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:58:20 by pemateu-          #+#    #+#             */
/*   Updated: 2023/10/03 13:56:48 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (ft_strlen(s) == 0)
		return (NULL);
	if ((int)start >= ft_strlen(s))
	{
		str = (char *) malloc(1);
		return ("");
	}
	if ((int)len >= ft_strlen(s))
		str = (char *) malloc(ft_strlen(s) * sizeof(char) + 1);
	else
		str = (char *) malloc(len * sizeof(char) 
				+ 1 * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
