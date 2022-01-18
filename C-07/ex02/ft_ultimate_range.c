/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:29:59 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/15 17:30:02 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int min, int max)
{
	int	counter;
	int	*range;
	int size;

	counter = 0;
	size = 0;
	if (min >= max)
		return (-1);
	range = malloc(sizeof(int) * (max - min));
	while (counter < max - min)
	{
		range[counter] = min + counter;
		counter++;
	}
	size = sizeof(range);
	free(range);
	return (size);
}
