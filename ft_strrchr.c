/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:42:36 by pemateu-          #+#    #+#             */
/*   Updated: 2023/09/12 21:28:07 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*aux;

	aux = NULL;
	str = malloc(ft_strlen(s) * sizeof(char));
	while (*s != '\0')
	{
		*str = *s;
		s++;
		str++;
	}
	s--;
	str--;
	while (*s != '\0' && *s != c)
	{
		s--;
		str--;
	}
	if (*s == c)
		aux = str;
	return (aux);
}
