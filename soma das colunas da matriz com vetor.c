/*
QUESTÃO 05:
Implementar uma função que, dada uma matriz
M10×8, gere um vetor V de tamanho 8, onde
cada elemento do vetor consiste na soma dos
elementos de uma coluna de M. Ou seja, o
elemento V[0] consiste na soma dos elementos
da primeira coluna de M, o elemento V[1]
consiste na soma dos elementos da segunda
coluna de M, e assim por diante.
*/

#include <stdio.h>
#include <string.h>
#define L 10
#define C 8
#define TAM 8

void somacolunaMatriz(float m[L][C], float v[C]);
void exibir (float m[L][C]);
void preencherMatriz (float m[L][C]);
void exibirvet (float vet[TAM]);

void main()
{
	float matriz[L][C], vetor[C];
	
	preencherMatriz(matriz);
	exibir (matriz);
	somacolunaMatriz(matriz, vetor);
	
	exibirvet (vetor);
	
	
	
}
void somacolunaMatriz(float m[L][C], float v[C])
{
	int i, j, soma;
	
	for(j = 0; j < C; j++)
	{
		soma = 0;
		
		for(i = 0; i < L; i++)
		{
			soma+=m[i][j];
		}
		
		v[j] = soma;
	}
	
}

void exibir (float m[L][C])
{
	
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

void exibirvet (float vet[TAM])
{
	
	int i, j;
	
	printf ("\nElementos do vetor:\n\n");
	

		//varrendo as colunas
	for (j=0;j<TAM;j++)
	{
		printf ("%5.1f ", vet[j]);
	}
		
	printf ("\n");
	
	
	printf ("\n\n");
}

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


