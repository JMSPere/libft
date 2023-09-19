/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:13:03 by pemateu-          #+#    #+#             */
/*   Updated: 2023/09/19 23:52:47 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ps;

	i = 0;
	ps = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if ((unsigned char)ps[i] == (unsigned char)c)
			return ((unsigned char *)(ps + i));
		i++;
	}
	return (NULL);
}
