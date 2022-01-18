/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   TESTING.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: jsegovia <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/30 10:49:55 by jsegovia		  #+#	#+#			 */
/*   Updated: 2021/11/30 10:49:57 by jsegovia		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

/* ************************************************************************** */
/*		 Create a function that displays all different combination		  */
/*		 of two digits between 00 and 99, listed by ascending order.		*/
/* ************************************************************************** */

#include <unistd.h>
char	ft_write(char i1, char i2, char i3, char i4)
{
	if (i1 != '9' || i2 != '8' || i3 != '9' || i4 != '9')
	{
		if (i4 >= i1 && i1 <= i3 && i2 != i4)
		{
			write(1, &i1, 1);
			write(1, &i2, 1);
			write(1, " ", 1);
			write(1, &i3, 1);
			write(1, &i4, 1);
			write(1, ", ", 2);
		}
	}
	else
	{
		write(1, &i1, 1);
		write(1, &i2, 1);
		write(1, " ", 1);
		write(1, &i4, 1);
		write(1, &i3, 1);
	}
	i4++;
	return (i4);
}

void	ft_print_comb2(void)
{
	char	i1;
	char	i2;
	char	i3;
	char	i4;

	i1 = '0';
	while (i1 <= '9')
	{
		i2 = '0';
		while (i2 <= '8')
		{
			i3 = '0';
			while (i3 <= '9')
			{
				i4 = '1';
				while (i4 <= '9')
				{
					i4 = ft_write(i1, i2, i3, i4);
				}
				i3++;
			}
			i2++;
		}
		i1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
