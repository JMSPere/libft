/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:16:02 by pemateu-          #+#    #+#             */
/*   Updated: 2023/12/14 11:54:41 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	if (size < 1 || nmemb < 1)
	{
		ptr = malloc(0);
		if (!ptr)
			return (NULL);
		*ptr = '\0';
		return (ptr);
	}
	if (nmemb * size > 2147483647)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	while (i < (size * nmemb))
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
