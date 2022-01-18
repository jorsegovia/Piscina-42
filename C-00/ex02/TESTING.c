/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:50:08 by jsegovia          #+#    #+#             */
/*   Updated: 2021/11/29 11:50:12 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_reverse_alphabet(void)
{
	char	letter;
	char	output;
	int		counter;

	counter = 0;
	letter = 'Z';
	while (counter <= 25)
	{
		output = write(1, &letter, 1);
		letter--;
		counter++;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
