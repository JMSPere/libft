/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:33:38 by pemateu-          #+#    #+#             */
/*   Updated: 2023/09/09 20:07:23 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("1: isalpha dona %d i ft_isalpha dona %d\n", 
			isalpha(*argv[1]), ft_isalpha(*argv[1]));
		printf("2: isdigit dona %d i ft_isadigit dona %d\n", 
			isdigit(*argv[1]), ft_isdigit(*argv[1]));
		printf("3: isalnum dona %d i ft_isalnum dona %d\n", 
			isalnum(*argv[1]), ft_isalnum(*argv[1]));
		printf("4: isascii dona %d i ft_isascii dona %d\n", 
			isascii(*argv[1]), ft_isascii(*argv[1]));
		printf("5: isprint dona %d i ft_isprint dona %d\n", 
			isprint(*argv[1]), ft_isprint(*argv[1]));
		printf("6: toupper dona %d => %c i ft_toupper dona %d => %c\n",
			toupper(*argv[1]), toupper(*argv[1]),
			ft_toupper(*argv[1]), ft_toupper(*argv[1]));
	}
	return (0);
}
