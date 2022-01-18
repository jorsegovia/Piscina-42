/* ********************************************************************* */
/* Create a function which sorts an array of integers by ascending order */
/* ********************************************************************* */

#include <stdio.h>
#include <unistd.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int count1;
	int count2;

	temp = 0;
	count1 = 0;
	count2 = count1 + 1;

	while(count1 < size)
	{
		while(count2 < size)
		{
			if(tab[count1] > tab[count2])
			{
				temp = tab[count1];
				tab[count1] = tab[count2];
				tab[count2] = temp;
			}
			count1++;
			count2++;
		}
		count1++;
	}
}

int	main()
{
	int	tab[] = {1, 3, 5, 2, 4};
	int	size;

	size = 5;
	printf("\nArray before: ");
	for (int i = 0; i < size; i++)
		printf("%d", tab[i]);
	ft_sort_int_tab(&tab[0], size);
	printf("\nArray after: ");
	for (int i = 0; i < size; i++)
		printf("%d", tab[i]);
}