/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:52:23 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/06 15:52:27 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	lowercase;
	int	c;

	c = 0;
	lowercase = 1;
	while (str[c] != '\0')
	{
		if (str[c] < 'a' || str[c] > 'z')
		{
			lowercase = 0;
			return (lowercase);
		}
		else
			lowercase = 1;
		c++;
	}
	return (lowercase);
}
