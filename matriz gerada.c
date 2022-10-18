/*
QUESTÃO 03:
Desenvolver uma função que gere a seguinte
matriz M5?5:
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exibir (int m[5][5]);
void matrizgerada(int mat[5][5]);

void main()
{
	int matriz[5][5];
	
	matrizgerada(matriz);
	
	exibir (matriz);
	 
}
void matrizgerada(int mat[5][5])
{
	int i, j, cont;
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			mat[i][j] = i+j+1;
		}
		
	}
	
	
}

void exibir (int m[5][5])
{
	
	int i, j;
	
	printf ("\nElementos da matriz:\n\n");
	
	//varrendo as linhas da matriz
	for (i=0;i<5;i++)
	{
		//varrendo as colunas
		for (j=0;j<5;j++)
		{
			printf ("%3.1d ", m[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
}
