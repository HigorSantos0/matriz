/*Fazer uma função que, dada uma matriz M6×6,
determine se ela é simétrica.
*/
/*
	FAETERJ-Rio
	FPR - Manhã - Professor Leonardo Vianna
	Data: 08/09/2022
	
	Lista de Exercícios VI (Matrizes):
	
	QUESTÃO 04:
	Fazer uma função que, dada uma matriz M6×6, determine se ela 
	é simétrica.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define L 3
#define C 3

#define TRUE 1
#define FALSE 0

//declaração de protótipos
void exibir (float m[L][C]);
int simetrica (float matriz[L][C]);

//main
void main ()
{
	//declaração de variáveis
	float matriz1[L][C] = { {1,2,3},
	                        {2,4,5},
	                        {3,5,6} };

	float matriz2[L][C] = { {5,4,1},
	                        {6,4,3},
	                        {3,8,6} };

	//exibindo a matriz 1
	exibir (matriz1);
	
	//chamando a função
	if (simetrica (matriz1) == TRUE)
	{
		printf ("\nA matriz 1 eh simetrica!\n\n");
	}
	else
	{
		printf ("\nA matriz 1 NAO eh simetrica!\n\n");
	}
	
	//exibindo a matriz 2
	exibir (matriz2);
	
	//chamando a função
	if (simetrica (matriz2) == TRUE)
	{
		printf ("\nA matriz 2 eh simetrica!\n\n");
	}
	else
	{
		printf ("\nA matriz 2 NAO eh simetrica!\n\n");
	}
}

//implementação das funções
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

int simetrica (float matriz[L][C])
{
	//declaração de variáveis
	int i, j;
	
	//varrendo a matriz
			//i<l-1
	for (i=0;i<L;i++)
	{
			//i+1
		for (j=0;j<C;j++)
		{
			//verificando se não é simétrica
			if (matriz[i][j] != matriz[j][i])
			{
				return FALSE;
			}
		}
	}
	
	return TRUE;
}
