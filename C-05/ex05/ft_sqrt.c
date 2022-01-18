/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:02:02 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/13 16:02:04 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	float	count;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	count = 1;
	while (count * count < nb)
	{
		++count;
	}
	if (count * count == nb)
		return (count);
	return (0);
}
