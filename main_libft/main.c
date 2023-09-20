/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemateu- <pemateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:33:38 by pemateu-          #+#    #+#             */
/*   Updated: 2023/09/20 11:30:04 by pemateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		size_t n;
		char *str;
		char *str2;
		char *src = (char *)"AAAAAAAAA";
		char dest[30];
		memset(dest, 'C', 5);
		//int size = 128 * 1024 * 1024;
		//char *dst = (char *)malloc(sizeof(char) * size);
		//char *data = (char *)malloc(sizeof(char) * size);

		//memset(data, 'A', size);
		//memmove(dst, data, size);
		//ft_memmove(dst, data, size);

		n = -3;
		str = malloc(sizeof("patata bona") * sizeof(char));
		str2 = malloc(sizeof("pero no tant") * sizeof(char));
		strcpy(str, "patata bona");
		strcpy(str2, "pero no tant");
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
		printf("7: tolower dona %d => %c i ft_tolower dona %d => %c\n",
			tolower(*argv[1]), tolower(*argv[1]),
			ft_tolower(*argv[1]), ft_tolower(*argv[1]));
		printf("8: strchr dona %s i ft_strchr dona %s\n",
			strchr("patata", *argv[1]), ft_strchr("patata", *argv[1]));
		printf("9: strrchr dona %s i ft_strrchr dona %s\n",
			strrchr("patata", *argv[1]), ft_strrchr("patata", *argv[1]));
		printf("10: strncmp dona %d i ft_strncmp dona %d\n",
			strncmp("patata", "patata bona", 11), ft_strncmp("patata", "patata bona", 11));
		printf("11: strncmp dona %d i ft_strncmp dona %d\n",
			strncmp("patata", "patata ", 7), ft_strncmp("patata", "patata ", 7));
		printf("12: strncmp dona %d i ft_strncmp dona %d\n",
			strncmp("a", "ab", 0), ft_strncmp("a", "ab", 0));
		memset(str, '$', 6);
		printf("13: memset dona %s", str);
		strcpy(str, "patata bona");
	       	ft_memset(str, '$', 6); 
		printf(" i ft_memset dona %s\n", str);
		strcpy(str, "patata bona");
		bzero(str, 6);
		printf("14: bzero dona %s", str);
		strcpy(str, "patata bona");
		ft_bzero(str, 6);
		printf(" i ft_bzero dona %s\n", str);	
		strcpy(str, "patata bona");
		memcpy(str, str2, strlen(str2));
		printf("15: memset dona %s", str);
		strcpy(str, "patata bona");
		ft_memcpy(str, str2, strlen(str2));
		printf(" i ft_memcpy dona %s\n", str);
		strcpy(str, "patata bona");
		memmove(str + n, str, strlen(str));
		printf("16: memmove dona %s", str + n);
		strcpy(str, "patata bona");
		ft_memmove(str + n, str, strlen(str));
		printf(" i ft_memmove dona %s\n", str + n);
		//printf("17: memmove dona %s\n", dst);
		for (int i = 0; i < 30; i++)
		{
			if (dest[i] == '\0')
				printf("\\0");
			else
				printf("%c", dest[i]);
		}
		printf("\n");
		printf("%ld\n", strlen(dest));
		n = strlcat(dest, src, -1);
		printf("17: strlcat dona %lu i %s\n", n, dest);
		for (int i = 0; i < 30; i++)
		{
			if (dest[i] == '\0')
				printf("\\0");
			else
				printf("%c", dest[i]);
		}
		printf("\n");
		printf("%ld\n", strlen(dest));
		memset(dest, '\0', 30);
		memset(dest, 'C', 5);
		printf("%s\n", dest);
		n = ft_strlcat(dest, src, -1);
		printf("17: ft_strlcat dona %lu i %s\n", n, dest);
		for (int i = 0; i < 30; i++)
		{
			if (dest[i] == '\0')
				printf("\\0");
			else
				printf("%c", dest[i]);
		}
		printf("\n");
	}
	return (0);
}
