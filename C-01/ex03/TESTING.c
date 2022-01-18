/* ************************************************* */
/* Create a function ft_div_mod prototyped like this */
/* void ft_div_mod(int a, int b, int *div, int *mod) */
/* ************************************************* */
#include <stdio.h>
#include <unistd.h> 

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 42;
	b = 4;
	div = 0;
	mod = 0;
	printf("\nValues Before: a= %d b= %d div= %d mod= %d", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("\nValues After: a= %d b= %d div= %d mod= %d", a, b, div, mod);
}