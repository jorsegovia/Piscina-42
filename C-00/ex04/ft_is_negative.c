/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:57:22 by jsegovia          #+#    #+#             */
/*   Updated: 2021/11/29 11:57:25 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	write_char(char var)
{
	write(1, &var, 1);
}

void	ft_is_negative(int var)
{
	if (var < 0)
	{
		write_char('N');
	}
	else
	{
		write_char('P');
	}
}
