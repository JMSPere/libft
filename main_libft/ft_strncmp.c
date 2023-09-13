/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:31:13 by pemateu-          #+#    #+#             */
/*   Updated: 2023/09/13 15:58:02 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0'
		&& str1[i] == str2[i] && i < n)
		i++;
	return (((unsigned char)str1[i] - (unsigned char)str2[i]));
}
