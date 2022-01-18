/* *********************************************************************** */
/*     Create a function ft_fibonacci that returns the n-th element of     */
/*     the Fibonacci sequence, the first element being at the 0 index      */
/* We’ll consider that the Fibonacci sequence starts like this: 0, 1, 1, 2 */
/* *********************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);
/*
int	ft_fibonacci(int index)
{
	int	count;
	long	t1;
	long	t2;
	long	nextTerm;
	
	count = 1;
	t1 = 0;
	t2 = 1;
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	while (count < index)
	{
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		count++;
	}
	return (t1);
}

void secuencia(int index)
{
	long int c, n, t1 = 0, t2 = 1, nextTerm;
	printf("Fibonacci Series: ");
	for (c = 1; c <= index; ++c)
	{
		printf("%d, ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
}
*/

int	main(void)
{
	int index = 5;

	printf("\n\nLa secuencia fibonacci de: %d \nEs: %d", index, ft_fibonacci(index));
	return (0);
}