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

//definição de constantes
#define L 5
#define C 5

//declaração de protótipos
void matrizEncontrarX (float m[L][C]);

void exibir (float m[L][C]);

void preencherMatriz (float m[L][C]);

//main
void main ()
{
	//declaração de variáveis
	float matriz[L][C];
	int valor, lin;
	
	//preenchendo a matriz original
	//preencherMatriz (matriz);
	
	matrizEncontrarX (matriz);
	exibir (matriz);
	
	
}

//implementação das funções
void matrizEncontrarX (float m[L][C])
{
	//declaração de variáveis
	int i, j, cont;
	cont = 1;
	
	for (i=0;i<L;i++)
	{
		for (j=0;j<C;j++)
		{
			m[i][j] = i+j+1;
		}
	}

	
}
/*

void preencherMatriz (float m[L][C])
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
*/

void exibir (float m[L][C])
{
	//declaração de variáveis
	int i, j;
	
	printf ("\nElementos da matriz:\n\n");
	
	//varrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//varrendo as colunas
		for (j=0;j<C;j++)
		{
			printf ("%5.1f ", m[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
}
