/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:49:54 by jsegovia          #+#    #+#             */
/*   Updated: 2021/11/29 11:49:57 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_alphabet(void)
{
	char	letter;
	int		counter;

	counter = 0;
	letter = 'a';
	while (counter <= 25)
	{
		write(1, &letter, 1);
		letter++;
		counter++;
	}
}
