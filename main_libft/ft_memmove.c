/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:48:48 by pemateu-          #+#    #+#             */
/*   Updated: 2023/09/16 01:34:44 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*psrc;
	unsigned char	*pdest;
	unsigned char	*aux;
	void			*array;

	i = n;
	array = malloc (n * sizeof(unsigned char));
	aux = array;
	psrc = (unsigned char *)src;
	pdest = dest;
	if (dest == NULL && src == NULL)
	{
		free(array);
		return (NULL);
	}
	while (n--)
		*aux++ = (unsigned char)*psrc++;
	n = i;
	aux = array;
	while (n--)
		*pdest++ = (unsigned char)*aux++;
	free(array);
	return (dest);
}
