/*
Questão 01 [2,5 pontos]:
Desenvolver uma função que, dada uma matriz de
inteiros M10x10, troque de posição os elementos da
linha L com os valores da coluna C. Caso a troca seja
possível, a função deverá retornar a constante TRUE;
caso contrário, FALSE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 3
#define C 3

#define TRUE 1
#define FALSE 0

void preencherMatriz (float m[L][C]);
void exibir (float m[L][C]);
int matrizTrocaPosicao(float matriz[L][C], int linha, int coluna);
int matrizAuxiliar(float matriz[L][C], int l, int c);
void exibirVetor (int vetor[], int tamanho);

void main()
{
	float m[L][C];
	int lin, col, vetor[3];
	
	preencherMatriz (m);
	exibir (m);
	
	printf("Entre com a linha que deseja trocar: ");
	scanf("%d", &lin);
	
	printf("Entre com a coluna que deseja trocar: ");
	scanf("%d", &col);
	
	matrizTrocaPosicao(m, lin, col);
	
	exibir (m);
}
int matrizTrocaPosicao(float matriz[L][C], int linha, int coluna)
{
	int i, j, aux, vetorL[3], vetorC[3], k = 0, m = 0;

    for(i= 0; i < L;)
    {
        for(j = 0; j < C; j++)
        {
        	
			aux = matriz[linha][j];
			matriz[linha][j] = matriz[i][coluna];
			matriz[i][coluna] = aux;
			i++;
		
        }
        
    }
    
}
int matrizAuxiliar(float matriz[L][C], int l, int c)
{
	int i, j;
}
void exibirVetor (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\n\nElementos do vetor: ");
	
	//varrendo o vetor
	for (i=0;i<tamanho;i++)	
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}

void preencherMatriz (float m[L][C])
{
	//declaração de variáveis
	int i, j;
	
	//srand (time(NULL));
	
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
