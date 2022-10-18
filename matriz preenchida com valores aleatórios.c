#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define L 30
#define C 20

void matrizcomNumeroAleatorios(int matriz[L][C]);
void exibir(int mat[L][C]);

void main()
{
    int m[L][C];

    exibir(m);

    matrizcomNumeroAleatorios(m);

    exibir(m);

}
void matrizcomNumeroAleatorios(int matriz[L][C])
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
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }
}
