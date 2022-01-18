/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:56:35 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/12 18:56:38 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_getlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

char	*ft_flip(char *str, int len)
{
	int		c;
	char	temp;

	c = 0;
	while (str[c] != '\0' && c < (len / 2))
	{
		temp = str[c];
		str[c] = str[len - c];
		str[len - c] = temp;
	}
	return (str);
}
