/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:38:52 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/06 15:38:54 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	numeric;
	int	c;

	c = 0;
	numeric = 1;
	while (str[c] != '\0')
	{
		if (str[c] < '0' || str[c] > '9')
		{
			numeric = 0;
			return (numeric);
		}
		else
			numeric = 1;
		c++;
	}
	return (numeric);
}
