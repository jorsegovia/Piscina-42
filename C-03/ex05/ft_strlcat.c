/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:19:18 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/08 10:19:20 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_getlen(char *s)
{
	int	l;

	l = 0;
	while (s[l] != '\0')
		l++;
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				d_l;
	int				s_l;
	int				c;
	unsigned int	buffer;

	d_l = ft_getlen(dest);
	s_l = ft_getlen(src);
	buffer = d_l;
	c = 0;
	while (src[c] != '\0')
	{
		dest[buffer] = src[c];
		buffer++;
		c++;
		if (buffer == (size - 1))
			break ;
	}
	dest[c] = '\0';
	return (d_l + s_l);
}
