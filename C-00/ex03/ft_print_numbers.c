/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:49:13 by jsegovia          #+#    #+#             */
/*   Updated: 2021/11/29 11:49:18 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	write_char(char var)
{
	write(1, &var, 1);
}

void	ft_print_numbers(void)
{
	char	var;
	int		counter;

	var = '0';
	counter = 0;
	while (counter <= 9)
	{
		write_char(var);
		var++;
		counter++;
	}
}
