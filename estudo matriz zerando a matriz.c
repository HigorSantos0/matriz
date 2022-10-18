#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define L 10
#define C 5

void zerar(int matriz[L][C]);
void exibir(int matriz[L][C]);

void main()
{
    int m[L][C];

    //exibir(m);

    zerar(m);

    exibir(m);

}
void zerar(int matriz[L][C])
{
    int i, j, soma;

    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            matriz[i][j] = 0;
        }
    }
}
void exibir(int matriz[L][C])
{
    int i, j;

    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
