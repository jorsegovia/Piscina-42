/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:59:37 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/06 15:59:39 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	uppercase;
	int	c;

	c = 0;
	uppercase = 1;
	while (str[c] != '\0')
	{
		if (str[c] < 'A' || str[c] > 'Z')
		{
			uppercase = 0;
			return (uppercase);
		}
		else
			uppercase = 1;
		c++;
	}
	return (uppercase);
}
