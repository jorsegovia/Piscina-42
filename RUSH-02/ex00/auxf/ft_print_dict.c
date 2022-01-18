/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <acaldero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:49:02 by acaldero          #+#    #+#             */
/*   Updated: 2021/12/12 20:48:49 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define DICTIONARY "../numbers.dict"


int	ft_atoi(char *str);

char *ft_print_dict(/* char dir */)

{
	int	dict;
	char buf[8000];
	ssize_t nr_bytes;
	
	dict = open(DICTIONARY, O_RDONLY);
	if (dict == -1)
	{
		printf("Error\n");
	}
	nr_bytes = read(dict, buf, 8000);
	close(dict);
	printf("He leído el Diccionario con %zd bytes.\n", nr_bytes);
	return (buf);
 
}

char *ft_keep_dict(/* char dir, char *dict */)
{

	char 	*buf;
	int	i;
	char *dict[2];

	printf("%s", buf);
	buf = ft_print_dict();
	i = 0;

	//printf("%s", buf);
	while (buf[i] != '\0')
	{

		while (buf[i] != ':')
		{
			dict[i][0] = buf[i];
			i++;
		}
		if (buf[i] == ':')
		{
			i++;
			while (buf[i] != '\n')
			{
				dict[i][1] = buf[i];
				i++;
			} 
		}	
		i++;
	}
	
	return(dict);
}

int	main()
{
	ft_keep_dict();
}




/* int	ft_atoi(char *str)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * negative);
} */