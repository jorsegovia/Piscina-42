/* ************************************************************************************************ */
/* Create a function that swaps the value of two integers whose addresses are entered as parameters */
/* ************************************************************************************************ */
#include <stdio.h>
#include <unistd.h> 
void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int a;
	int b;

	a = 4;
	b = 2;
	printf("\n Before: %d%d", a, b);
	ft_swap(&a, &b);
	printf("\n After: %d%d", a, b);
}