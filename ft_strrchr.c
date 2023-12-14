/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:42:36 by pemateu-          #+#    #+#             */
/*   Updated: 2023/12/14 11:51:07 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	while (count >= 0 && *s != (unsigned char) c)
	{
		count--;
		if (count != 0)
			s--;
	}
	if (*s == (unsigned char) c)
		return ((char *) s);
	return (NULL);
}
