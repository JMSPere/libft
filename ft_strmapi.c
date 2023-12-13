/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:35:15 by pemateu-          #+#    #+#             */
/*   Updated: 2023/12/13 17:52:17 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*resultstr;
	int		i;

	if (s == NULL)
		return (0);
	i = 0;
	resultstr = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (resultstr == NULL)
		return (0);
	while (s[i] != '\0')
	{
		resultstr[i] = (*f)(i, s[i]);
		i++;
	}
	resultstr[i] = '\0';
	return (resultstr);
}
