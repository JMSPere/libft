/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:57:36 by pemateu-          #+#    #+#             */
/*   Updated: 2023/09/20 00:14:31 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i = 0;
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((unsigned char)ps1[i] == (unsigned char)ps2[i] && i < n - 1)
		i++;
	if (((unsigned char)ps1[i] - (unsigned char)ps2[i]) < 0)
		return (-1);
	return (((unsigned char)ps1[i] - (unsigned char)ps2[i]));
}
