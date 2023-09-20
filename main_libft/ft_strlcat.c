/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:44:50 by pemateu-          #+#    #+#             */
/*   Updated: 2023/09/20 01:59:36 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		lendst;
	int		lensrc;
	size_t	i;

	i = 0;
	lendst = 0;
	lensrc = 0;
	if (size <= 0)
		return (ft_strlen(src));
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	i = lendst;
	while (i < size - 1)
	{
		dst[i] = src[i - lendst];
		i++;
	}
	dst[i] = '\0';
	if ((int)size < lendst)
		return (lensrc + size);
	return (lendst + lensrc);
}
