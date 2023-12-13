/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:48:48 by pemateu-          #+#    #+#             */
/*   Updated: 2023/09/18 13:13:42 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	unsigned const char	*psrc;

	if (dest < src)
		return (ft_memcpy(dest, src, n));
	pdest = (unsigned char *)dest;
	psrc = (unsigned const char *)src;
	if (!n || dest == src)
		return (dest);
	while (n--)
		pdest[n] = psrc[n];
	return (dest);
}
