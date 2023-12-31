/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:45:12 by pemateu-          #+#    #+#             */
/*   Updated: 2023/12/14 14:09:22 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	number_length(int n)
{
	int	c;

	c = 0;
	if (n <= 0)
		c++;
	while (n)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

void	while_loop(int size, int i, char *result, char *str)
{
	int	j;

	j = 0;
	while (i < size)
	{
		result[i] = str[size - j - 1];
		i++;
		j++;
	}
	result[i] = '\0';
}

char	*revert_numeric_string(char *str, int size)
{
	int		i;
	char	*result;

	i = 0;
	result = (char *) malloc(size * sizeof(char) + sizeof(char));
	if (!result)
	{
		free(str);
		return (NULL);
	}
	if (*str == '-')
	{
		result[i] = '-';
		i++;
	}
	while_loop(size, i, result, str);
	free(str);
	return (result);
}

void	build_numeric_string(char *str, int i, int n, int numlength)
{
	while (i < numlength)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	int		numlength;
	char	*str;

	if (n == -2147483648)
		return (ft_strjoin("-21474", "83648"));
	i = 0;
	numlength = number_length(n);
	str = (char *) malloc(numlength * sizeof(char) + sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
		i++;
	}
	if (n < 10 && n >= 0)
		str[i] = n + '0';
	build_numeric_string(str, i, n, numlength);
	str = revert_numeric_string(str, numlength);
	return (str);
}
