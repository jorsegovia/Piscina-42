/* ****************************************************************** */
/* Create a function ft_ultimate_div_mod with the following prototype */
/* ****************************************************************** */

#include <stdio.h>
#include <unistd.h> 
void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main()
{
 int	a;
 int	b;

	a = 42;
	b = 4;
	printf("\nValues before: a=%d b=%d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("\nValues after: a=%d b=%d", a, b);
}