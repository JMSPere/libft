/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:44:50 by pemateu-          #+#    #+#             */
/*   Updated: 2023/12/14 12:09:15 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	j = dstlen;
	while (src[i] && j < (size - 1) && size > 0)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (!(dst[j] == '\0'))
		dst[j] = '\0';
	if (size < dstlen)
		dstlen = size;
	return (dstlen + srclen);
}
