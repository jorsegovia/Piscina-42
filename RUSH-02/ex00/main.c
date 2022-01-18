/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:10:30 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/11 11:10:35 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define DICT "./diccionario"

int		ft_atoi(char *str);
char	*ft_print_dict(void);
// In ft_number.c 
int		getmult(int nb);
int		getdec(int nb);
//int	ft_isDigit(int nb);------> No se necesita con un atoi que funcione
//int	ft_isNumber(char *str);------> No se necesita con un atoi que funcione
// In ft_array.c
//int	ft_getlen(char *str);------> No se necesita
//char	*ft_flip(char *str, int len);------> No se necesita

//In writeFunc.c
void	ft_putstr(char *str);
//void	ft_escribreUnidades(char *str);------> No se necesita
//void	ft_escribeDecenas(char *str);------> No se necesita
//void	ft_escribe100();			------> No se necesita
//void	ft_escribeCentenas(char *str);------> No se necesita

void	ft_convert(int n, char *dict[50][2], int first)
{
	int	i;//variable contador
	int	mult;//multiplo de 10 del numero actual

	i = 0;
	mult = getmult(n);//averiguar el multiplo del numero pasado
	if (mult >= 100)
		ft_convert(n / mult, dict, first);
	if (first == 0)//si no es el primer valor introduce un espacio antes de escribir mas
		write(1, " ", 1);
	first = 0;
	while (dict[i][0] != mult)//recorrer el dict de valores buscando el multiplo del numero
		i++;
	ft_putstr(dict[i][1]);//escribir el valor correspondiente
	if (mult != 0 && n % mult != 0)//pasar al siguiente digito del numero
		ft_convert(n % mult, dict, first);
}

int	main(int argc, char *argv[])
{
	char	*dict[50][2];
	int		first;//declarar si es la primera cifra a escribir

	first = 1;
	//si el numero de argumentos es incorrecto mostrar mensaje de error
	if (argc > 2 || argc < 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else//si hay 2 o 3 arg continua
	{
		//comprobar si el primer arg es un numero
		if (ft_atoi(argv[1]) == 1)
		{
			write(1, "Error\n", 6);
			return (1);
		}
		//si solo hay un argumento, cargar el diccionario base
		if (argc == 2)
			ft_dictionary(DICT, &dict[0][0]);
		//cargar el diccionario pasado como arg
		else if (argc == 3)
			ft_dictionary(argv[2], &dict[0][0]);
		//convertir el numero pasado
		ft_convert(ft_atoi(argv[1]), dict, first);
		return (0);
	}
}
