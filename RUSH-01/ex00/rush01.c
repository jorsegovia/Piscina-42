#define N 4
#include <stdio.h>
void	fillMatrix (int matriz[N][N], int *arrValor,int *vectorPistas, int columna);
void	elegir(int matriz[N][N], int *vectorPistas, int fila, int opcion);
void	brutus (int matriz[N][N], int *array, int *vectorPistas, int fila, int opcion);
void	printM(int matrix[N][N]);
int main() {
	int matriz[N][N] = {{0,0,0,0},
						{0,0,0,0},
						{0,0,0,0},
						{0,0,0,0}};
	int vectorPistas[] = {4, 3, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 3, 4};
	elegir(matriz, vectorPistas, 0, 0);
	printM(matriz);
	return 0;
}
void    printM(int matrix[N][N])
{
	for(int i =0;i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			printf("\t%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void elegir(int matriz[N][N], int *vectorPistas, int fila, int opcion) {
	if (fila < 4 && opcion <= 5) {
		int array_1_4_a[] = {4, 3, 2, 1};
		int array_1_3_a[] = {4, 3, 1, 2};
		int array_1_3_b[] = {4, 2, 3, 1};
		int array_1_3_c[] = {4, 1, 3, 2};
		int array_1_2_a[] = {4, 2, 1, 3};
		int array_1_2_b[] = {4, 1, 2, 3};
		int array_2_3_a[] = {1, 4, 3, 2};
		int array_2_3_b[] = {2, 4, 3, 1};
		int array_2_3_c[] = {3, 4, 2, 1};
		int array_2_2_a[] = {1, 4, 2, 3};
		int array_2_2_b[] = {2, 4, 1, 3};
		int array_2_2_c[] = {3, 4, 1, 2};
		int array_2_2_d[] = {3, 2, 4, 1};
		int array_2_2_e[] = {3, 1, 4, 2};
		int array_2_2_f[] = {2, 1, 4, 3};
		int array_2_1_a[] = {3, 2, 1, 4};
		int array_2_1_b[] = {3, 1, 2, 4};
		int array_3_2_a[] = {2, 3, 4, 1};
		int array_3_2_b[] = {1, 3, 4, 2};
		int array_3_2_c[] = {1, 2, 4, 3};
		int array_3_1_a[] = {1, 3, 2, 4};
		int array_3_1_b[] = {2, 1, 3, 4};
		int array_4_1_a[] = {1, 2, 3, 4};
		switch (vectorPistas[15 - fila])
		{
			case 1:
				switch (vectorPistas[4 + fila]) {
					case 2: {
						if (opcion ==0)
						brutus(matriz, array_1_2_a,vectorPistas, fila, opcion);
						if (opcion==1)
						brutus(matriz, array_1_2_b,vectorPistas, fila, opcion);
					}
					case 3: {
						if (opcion ==0)
						brutus(matriz, array_1_3_a,vectorPistas, fila, opcion);
						if (opcion ==1)
						brutus(matriz, array_1_3_b,vectorPistas, fila, opcion);
						if (opcion == 2)
						brutus(matriz, array_1_3_c,vectorPistas, fila, opcion);
					}
					case 4: {
						if (opcion ==0)
						brutus(matriz, array_1_4_a,vectorPistas, fila, opcion);
					}
				}
			case 2:
				switch (vectorPistas[4 + fila]) {
					case 1: {
						if (opcion ==0)
						brutus(matriz, array_2_1_a,vectorPistas, fila, opcion);
						if (opcion ==1)
						brutus(matriz, array_2_1_b,vectorPistas, fila, opcion);
					}
					case 2: {
						if (opcion ==0)
						brutus(matriz, array_2_2_a,vectorPistas, fila, opcion);
						if (opcion ==1)
						brutus(matriz, array_2_2_b,vectorPistas, fila, opcion);
						if (opcion ==2)
						brutus(matriz, array_2_2_c,vectorPistas, fila, opcion);
						if (opcion ==3)
						brutus(matriz, array_2_2_d,vectorPistas, fila, opcion);
						if (opcion ==4)
						brutus(matriz, array_2_2_e,vectorPistas, fila, opcion);
						if (opcion ==5)
						brutus(matriz, array_2_2_f,vectorPistas, fila, opcion);
					}
					case 3: {
						if (opcion ==0)
						brutus(matriz, array_2_3_a,vectorPistas, fila, opcion);
						if (opcion ==1)
						brutus(matriz, array_2_3_b,vectorPistas, fila, opcion);
						if (opcion ==2)
						brutus(matriz, array_2_3_c,vectorPistas, fila, opcion);
					}
				}
			case 3:
				switch (vectorPistas[4 + fila])
				{
					case 1: {
						if (opcion ==0)
						brutus(matriz, array_3_1_a,vectorPistas, fila, opcion);
						if (opcion ==1)
						brutus(matriz, array_3_1_b,vectorPistas, fila, opcion);
					}
					case 2: {
						if (opcion ==0)
						brutus(matriz, array_3_2_a,vectorPistas, fila, opcion);
						if (opcion ==1)
						brutus(matriz, array_3_2_b,vectorPistas, fila, opcion);
						if (opcion ==2)
						brutus(matriz, array_3_2_c,vectorPistas, fila, opcion);
					}
				}
			case 4: {
				brutus(matriz, array_4_1_a, vectorPistas, fila, opcion);
			}
		}
	}
}