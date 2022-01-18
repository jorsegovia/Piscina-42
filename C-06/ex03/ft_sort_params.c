/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:38:40 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/14 13:38:43 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *str1, char *str2)
{
	int	count;

	count = 0;
	while (str1[count] && str2[count] && str1[count] == str2[count])
		count++;
	return (str1[count] - str2[count]);
}

int	main(int argc, char **argv)
{
	int	counter1;
	int	counter2;

	counter1 = 1;
	while (counter1 < argc)
	{
		counter2 = 1;
		while (counter2 < argc - 1)
		{
			if (ft_strcmp(argv[counter2], argv[counter2 + 1]) > 0)
				ft_swap(&argv[counter2], &argv[counter2 + 1]);
			counter2++;
		}
		counter1++;
	}
	counter1 = 1;
	while (counter1 < argc)
	{
		ft_putstr(argv[counter1]);
		write(1, "\n", 1);
		counter1++;
	}
	return (0);
}
