/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:03:49 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/14 16:03:51 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_getlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strdup(char *src)
{
	int	counter;
	int	size;
	char	*pnt;

	counter = 0;
	size = ft_getlen(src);
	pnt = malloc(size);

	while (counter < size)
	{
		pnt[counter] = src[counter];
		counter++;
	}
	return (pnt);
}
