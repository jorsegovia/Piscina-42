/* ********************************************************************************* */
/* Create a function which reverses a given array of integer (first goes last, etc)  */
/*       The arguments are a pointer to int and the number of ints in the array      */
/* ********************************************************************************* */

#include <stdio.h>
#include <unistd.h>
void    ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int count;

    temp = 0;
    count = 0;
    while (count < size /2)
    {
        temp = tab[count];
        tab[count] = tab[size - 1 - count];
        tab[size - 1 - count] = temp;
        count++;
    }
}

int main()
{
    int tab[] = {0, 1, 2, 3, 4, 5};
    int size;

    size = 6;
    printf("\nArray before: ");
    for (int i = 0; i < size; i++)
        printf("%d", tab[i]);
    ft_rev_int_tab(&tab[0], size);
    printf("\nArray after: ");
    for (int i = 0; i < size; i++)
        printf("%d", tab[i]);
}