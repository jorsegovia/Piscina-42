/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:07:50 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/06 16:08:00 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	printable;
	int	c;

	c = 0;
	printable = 1;
	while (str[c] != '\0')
	{
		if (str[c] < 32 || str[c] > 126)
		{
			printable = 0;
			return (printable);
		}
		else
			printable = 1;
		c++;
	}
	return (printable);
}
