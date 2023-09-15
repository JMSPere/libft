/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:53:22 by pemateu-          #+#    #+#             */
/*   Updated: 2023/09/15 17:39:02 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = src;
	p2 = dest; 
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n--)
		*p2++ = (unsigned char)*p1++;
	return (dest);
}
