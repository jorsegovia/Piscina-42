/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:02:44 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/13 16:02:46 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	if (nb <= 1)
		return (0);
	while (count < nb)
	{
		if (nb % count == 0)
			return (0);
		++count;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	count;

	count = 1;
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb + count))
		++count;
	return (nb + count);
}
