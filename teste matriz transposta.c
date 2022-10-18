/*
QUESTÃO 01:
Faça uma função que, dada uma matriz M8×5 de
reais, gere a matriz Mt

, sua transposta.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 8
#define C 5

void matrizTransposta(int matriz[L][C], int mt[C][L]);
void exibir (int m[L][C]);
void exibirTransposta (int m[C][L]);
void preencherMatriz (int m[L][C]);

void main ()
{
	int matriz[L][C], transposta[C][L];
	
	preencherMatriz (matriz);
	exibir (matriz);
	matrizTransposta (matriz, transposta);
	exibirTransposta (transposta);	
}
void matrizTransposta(int matriz[L][C], int mt[C][L])
{
	int i, j;
	
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			mt[j][i] = matriz[i][j];	
		}	
	}	
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
			printf ("%d ", m[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
}
void exibirTransposta (int m[C][L])
{	
	//declaração de variáveis
	int i, j;
	
	printf ("\nElementos da matriz transposta:\n\n");
	
	//varrendo as linhas da matriz
	for (i=0;i<C;i++)
	{
		//varrendo as colunas
		for (j=0;j<L;j++)
		{
			printf ("%d ", m[i][j]);
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
