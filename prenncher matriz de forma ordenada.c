#include <stdio.h>
#include <string.h>

#define L 20
#define C 15

void preencherOrdenado(int matriz[L][C]);
void exibir(int mat[L][C]);

void main()
{
    int m[L][C];

    //exibir(m);

    preencherOrdenado(m);

    exibir(m);

}
void preencherOrdenado(int matriz[L][C])
{
    int i, j, valor;
    
    valor = 1;

    for(i = 0; i < L; i++)
    {
    	
        for(j = 0; j < C; j++)
        {
            matriz[i][j] = valor;
        }
        valor++;
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
