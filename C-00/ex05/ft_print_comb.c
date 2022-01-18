/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:42:11 by jsegovia          #+#    #+#             */
/*   Updated: 2021/11/29 16:42:14 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	write_char(int i1, int i2, int i3)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = i1 + '0';
	c2 = i2 + '0';
	c3 = i3 + '0';
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	if (((i1 * 100) + (i2 * 10) + i3) != 789)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i1;
	int	i2;
	int	i3;

	i1 = 0;
	i2 = 0;
	i3 = 0;
	while (i1 <= 7)
	{
		i2 = 1 + i1;
		while (i2 <= 8)
		{
			i3 = 1 + i2;
			while (i3 <= 9)
			{
				write_char(i1, i2, i3);
				i3++;
			}
			i2++;
		}
		i1++;
	}
}
