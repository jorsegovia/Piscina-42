/* ************************************************************************* */
/* Create a function that displays a number in a base system in the terminal */
/*   The number is given as an int and the radix as a string of characters   */
/* ************************************************************************* */

#include <unistd.h>

int	ft_getlen(char *str);
int ft_checknum(int nb);
int	check_base(char *str);
void ft_putnbr_base(int nbr, char *base);
/*
int	ft_getlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_checknum(int nb)
{
	if (nb < 0)
	{
		nb *= -1;
		ft_checknum(nb);
	}
	if (nb >= 10)
	{
		ft_checknum(nb / 10);
		ft_checknum(nb % 10);
	}
	else if (nb >= 0 || nb <= 9)
		return (0);
	else
		return (1);
	return (1);
}

int		check_base(char *str)
{
	int i;
	int j;

	if (ft_getlen(str) <= 1)
		return (0);
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z')
				&& !(str[i] >= 'a' && str[i] <= 'z')
				&& !(str[i] >= '0' && str[i] <= '9'))
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
	int	base_l;
	base_l = ft_getlen(base);
	if (nbr < 0)//Si la base es negativa, volverla positiva y pasarla de nuevo por la función
	{
		write(1,"-",1);
		ft_putnbr_base(-nbr,base);
	}
	else if (nbr < base_l)//Si el numero es menor que la base; printar la posicion de la base
	{
		write(1, &base[nbr], 1);
	}
	else//Si el numero es mayor que la base hacer division y modulo y pasar de nuevo por func.
	{
		ft_putnbr_base(nbr / base_l, base);
		ft_putnbr_base(nbr % base_l, base);
	}
}
*/
int	main(void)
{
	int	num = 12;
	char	base[] = "0123456789ABCDF";
	/*if (ft_checknum(num))//Si el el arg no es un numero, devolver error
	{
		write(1,"Error num\n",10);
		return (1);
	}
	if (!check_base(base))//Si la base no es valida, devolver error
	{
		write(1,"Error base\n",11);
		return (1);
	}*/
	ft_putnbr_base(num, base);
	return (0);
}