/*QUESTÃO 02:
Desenvolver uma função que, dada uma matriz
M15×20, determine se um número X se encontra
na linha L da matriz.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 15
#define C 20
#define TRUE 1
#define FALSE 0


void exibir (int m[L][C]);
void preencherMatriz (int m[L][C]);
int mtbruscar(int mat[L][C], int numero, int lin);

void main ()
{
	int matriz[L][C], transposta[C][L];
	int valor, linha;
	
	preencherMatriz (matriz);
	exibir (matriz);
	
	printf("Entre com o valor a ser buscado: ");
	scanf("%d", &valor);
	
	printf("Entre em qual linha deve ser buscado: ");
	scanf ("%d", &linha);
	
	if (mtbruscar (matriz, valor, linha) == TRUE)
	{
		printf ("\nO valor %.1d foi encontrado na linha %d da matriz!", valor, linha);
	}
	else
	{
		printf ("\nO valor %.1d NAO foi encontrado na linha %d da matriz!", valor, linha);
	}	
}
int mtbruscar(int mat[L][C], int numero, int lin)
{
	int i, j;
	
//	for(i = 0; i < L; i++)
//	{
		for(j = 0; j < C; j++)
		{
		//	if(i == lin)
		//	{
				if(mat[lin][j] == numero)
				{
					return TRUE;
				}
	//		}
		}
//	}
	return FALSE;
}
void exibir (int m[L][C])
{
	
	int i, j;
	
	printf ("\nElementos da matriz:\n\n");
	
	//varrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//varrendo as colunas
		for (j=0;j<C;j++)
		{
			printf ("%3.1d ", m[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
}
void preencherMatriz (int m[L][C])
{
	//declaração de variáveis
	int i, j;
	
	srand (time(NULL));
	
	//varrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//varrendo as colunas
		for (j=0;j<C;j++)
		{
			m[i][j] = rand () % 100;
		}
	}
}
