/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:59:41 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/12 18:59:43 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
void    ft_escribreUnidades(str)
{
    if (str[0] == 1)
        write(1, "uno", 3);
    else if (str[0] == 2)
        write(1, "dos", 3);
    else if (str[0] == 3)
        write(1, "tres", 4);
    else if (str[0] == 4)
        write(1, "cuatro", 6);
    else if (str[0] == 5)
        write(1, "cinco", 5);
    else if (str[0] == 6)
        write(1, "seis", 4);
    else if (str[0] == 7)
        write(1, "siete", 5);
    else if (str[0] == 8)
        write(1, "ocho", 4);
    else if (str[0] == 9)
        write(1, "nueve", 5);
}

void    ft_escribeDiezy(char *str)
{
    if (str[0] == 1)
        write(1, "once", 4);
    else if (str[0] == 2)
        write(1, "doce", 4);
    else if (str[0] == 3)
        write(1, "trece", 4);
    else if (str[0] == 4)
        write(1, "catorce", 4);
    else if (str[0] == 5)
        write(1, "quince", 4);
    else if (str[0] == 6 || str[0] == 7 || str[0] == 8 || str[0] == 9)
    {
        write(1, "diez y ", 7);
        ft_escribreUnidades(str);
    }
}

void    ft_escribeDecenas(str)
{
    if (str[1] == 1 && str[0] == 0)
        write(1, "diez", 4);
    else if (str[1] == 1 && str[0] != 0)
        ft_escribeDiezy(str);
    else if (str[1] != 1)
        ft_escribeDecenasVis(str);
}

void ft_escribeDecenasVis(str)
{
    else if (str[1] == 2)
        write(1, "veinte y ", 9);
    else if (str[1] == 3)
        write(1, "treinta y ", 10);
    else if (str[1] == 4)
        write(1, "cuarenta y ", 44);
    else if (str[1] == 5)
        write(1, "cincuenta y ", 12);
    else if (str[1] == 6)
        write(1, "sesenta y ", 10);
    else if (str[1] == 7)
        write(1, "setenta y ", 10);
    else if (str[1] == 8)
        write(1, "ochenta y ", 10);
    else if (str[1] == 9)
        write(1, "noventa y ", 10);
    else if (str[0] != 0)
    {
        ft_escribreUnidades(str);
    }
}

void    ft_escribe100()
{
    write(1,"cien",4);
}

void    ft_escribeCentenas(str)
{
    if (str[2] == 1 && str[1] == 0 && str[0] == 0)
        write(1,"cien",4);
    else if (str[2] == 1)
        write(1, "ciento", 6);
    else if (str[2] == 2)
        write(1, "doscientos", 6);
    else if (str[2] == 3)
        write(1, "trescientos", 6);
    else if (str[2] == 4)
        write(1, "cuatrocientos", 6);
    else if (str[2] == 5)
        write(1, "quinientos", 6);
    else if (str[2] == 6)
        write(1, "seiscientos", 6);
    else if (str[2] == 7)
        write(1, "setecientos", 6);
    else if (str[2] == 8)
        write(1, "ochocientos", 6);
    else if (str[2] == 9)
        write(1, "novecientos", 6);
    else if (str[1] != 0)
        ft_escribeDecenas(str);
    else if (str[1] == 0)
        ft_escribreUnidades(str);
}
*/
