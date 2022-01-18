/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:49:54 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/12 17:51:36 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *str1, char *str2, unsigned int nb)
{
	unsigned int	c1;
	unsigned int	c2;

	c1 = 0;
	c2 = 0;
	while (str1[c1])
		c1++;
	while (str2[c2] && c2 < nb)
	{
		str1[c1 + c2] = str2[c2];
		c2++;
	}
	str1[c1 + c2] = '\0';
	return (str1);
}
