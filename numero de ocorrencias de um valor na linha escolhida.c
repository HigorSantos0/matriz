#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define L 50
#define C 20


void aleatorios(int matriz[L][C]);
void exibir(int mat[L][C]);
int quantOcorrencias(int matOne[L][C], int valor, int linha);


void main()
{
    int m[L][C], valor, quantidade, linha;

    //exibir(m);

    aleatorios(m);
    exibir(m);

    printf("Entre com o valor a ser buscado: ");
    scanf ("%d", &valor);

    printf("Entre com a linha que deseja buscar o valor: ");
    scanf("%d", &linha);

    quantidade = quantOcorrencias(m, valor, linha);

    printf("A quantidade de Ocorrencias deste numero = %d\n", quantidade);


}
int quantOcorrencias(int matOne[L][C], int valor, int linha)
{
    int i, j, cont = 0;

    //for(i= 0; i < L; i++)
    //{
        for(j = 0; j < C; j++)
        {
            //if(i == linha)
            //{
                if(matOne[linha][j] == valor)
                {
                    cont++;
                }
            //}
            
        }
    //}
    return cont;
}

void aleatorios(int matriz[L][C])
{
    int i, j;
    
    srand(time(NULL));

    for(i = 0; i < L; i++)
    {
    	
        for(j = 0; j < C; j++)
        {
            matriz[i][j] = 1+rand() % 100;
        }
        
    }
}
void exibir(int mat[L][C])
{
    int i, j;

    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            printf("%5d", mat[i][j]);
        }
        printf("\n");
    }
}
