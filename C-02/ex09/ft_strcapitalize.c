/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:10:19 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/06 17:10:20 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *s)
{
	int	c;
	int	p;

	c = 1;
	p = c - 1;
	while (s[c] != '\0')
	{
		if (s[c] >= 'A' && s[c] <= 'Z')
			s[c] = s[c] + 32;
		c++;
	}
	c = 0;
	while (s[c] != '\0')
	{
		if ((s[p] < 'A' && s[c] > 'Z') || (s[p] < 'a' && s[c] > 'z'))
			if (s[p] < '0' && s[p] > '9')
				s[c] = s[c] - 32;
		c++;
	}
	return (s);
}
