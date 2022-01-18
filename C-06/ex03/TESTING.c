/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:38:35 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/14 13:38:36 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*  Create a program that displays its given arguments sorted by ascii order  */
/* It should display all arguments, except for argv[0]. One argument per line */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{//recorre el array del str escribiendo los caracteres
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
	//Si ambos str son validos y son iguales, pasa al siguiente
	while (str1[count] && str2[count] && str1[count] == str2[count])
		count++;
	//devuelve la diferenia entre argumentos
	return (str1[count] - str2[count]);
}

int	main(int argc, char **argv)
{
	int	counter1;
	int	counter2;

	counter1 = 1;
	//hacer bubble sort tantas veces como elementos
	while (counter1 < argc)
	{
		counter2 = 1;
		while (counter2 < argc - 1)
		{//compara los argumentos y cambialos si el segundo > primero
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
