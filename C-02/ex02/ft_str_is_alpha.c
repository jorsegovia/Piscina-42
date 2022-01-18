/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:08:10 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/06 15:08:13 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	alpha;
	int	c;

	c = 0;
	alpha = 1;
	while (str[c] != '\0')
	{
		if (str[c] < 'A' || (str[c] > 'Z' && str[c] < 'a') || str[c] > 'z')
		{
			alpha = 0;
			return (alpha);
		}
		else
			alpha = 1;
		c++;
	}
	return (alpha);
}
