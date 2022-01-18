/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:51:15 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/01 09:51:20 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_write(char nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 2147483647 && nb >= -2147483648)
	{
		if (nb == -2147483648)
			write(1, "-2147483648", 11);
		else if (nb < 0 && nb > -10)
		{
			write(1, "-", 1);
			nb *= -1;
			ft_write(nb + '0');
		}
		else if (nb <= -10)
		{
			nb *= -1;
			write(1, "-", 1);
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
			ft_write(nb + '0');
	}
}
