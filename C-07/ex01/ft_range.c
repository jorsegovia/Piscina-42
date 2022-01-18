/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:15:02 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/14 16:15:04 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	counter;
	int	*pnt;

	counter = 0;
	if (min >= max)
		return (NULL);
	pnt = malloc(sizeof(int) * (max - min));
	while (counter < max - min)
	{
		pnt[counter] = min + counter;
		counter++;
	}
	return (pnt);
}
