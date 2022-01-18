/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 19:05:46 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/12 19:05:49 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//saber que decena tiene
int	getdec(int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

//obtener el multiplo de 10 del numero
long	getmult(long nb)
{
	if (nb >= 1000000000000)
		return (1000000000000);
	else if (nb >= 100000000000)
		return (100000000000);
	else if (nb >= 10000000000)
		return (10000000000);
	if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else					//para casos menores a 100
		return (getdec(nb));
}

/*
int	ft_isDigit(int nb)
{
	if (nb == '0' || nb == '1' || nb == '2' || nb == '3')
		return (0);
	else if (nb == '4' || nb == '5' || nb == '6' || nb == '7')
		return (0);
	else if (nb == '8' || nb == '9')
		return (0);
	return (1);
}
int	ft_isNumber(char *str)
{
	int i = 0;

	//checking for negative numbers
	if (str[0] == '-')
		i = 1;
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
		//if (isdigit(str[i]) == 1)
			return (1);
        i++;
	}
	return (0);
}
*/
