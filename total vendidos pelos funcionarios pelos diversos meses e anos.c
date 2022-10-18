/*
QUEST�O 06:
Considere uma loja que mant�m em uma
matriz o total vendido por cada funcion�rio
pelos diversos meses do ano. Ou seja, uma
matriz de 12 linhas (uma por m�s) e 10 colunas
(10 funcion�rios). Pede-se o desenvolvimento
de uma fun��o para cada item abaixo:

a. Calcular o total vendido durante o ano;
b. Dado um m�s fornecido pelo usu�rio,
determinar o total vendido nesse m�s;
c. Dado um funcion�rio fornecido pelo
usu�rio, determinar o total vendido por ele
durante o ano;
d. Determinar o m�s com maior �ndice de
vendas;
e. Determinar o funcion�rio que menos
vendeu durante o ano.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define meses 12
#define funcionarios 10


float totalvendido(float vendas[meses][funcionarios]);
float totalvendidosmes(float vendas[meses][funcionarios], int mes);
float totalvendasfuncionarios(float vendas[meses][funcionarios], int funcio);
int mesmaiorindicedevendas(float vendas[meses][funcionarios]);
int funciomaiorindicevendas(float vendas[meses][funcionarios]);
void aleatorio(float matriz[meses][funcionarios]);
void exibir(float mat[meses][funcionarios]);

void main()
{
	float v[meses][funcionarios];
	float soma, mes, totvendmes, fun, totalvenfun;
	int mesmaior, mesmenor;
	
	aleatorio(v);
	exibir(v);
	
	soma = totalvendido(v);//A
	
	printf("\n");
	printf("A quantidade vendida em geral = %.1f\n", soma);
	
	printf("Entre com o numero do mes desejado para saber o total vendido: ");
	scanf("%f", &mes);
	
	totvendmes = totalvendidosmes(v, mes);//B
	
	printf("Total vendido no mes: %.2f\n", totvendmes);
	
	printf("Entre com o numero do funcionario para saber o quanto ele vendeu: ");
	scanf("%f", &fun);
	
	totalvenfun = totalvendasfuncionarios(v, fun);//C
	
	printf("Total vendido por este funcionario = %.2f\n", totalvenfun);
	
	mesmaior = mesmaiorindicedevendas(v);//D
	
	printf("Mes com maior indice de venda: %d\n", mesmaior); 
	
	mesmenor = funciomaiorindicevendas(v);//E
	
	printf("Mes com menor indice de venda: %d\n", mesmenor);
	
}

float totalvendido(float vendas[meses][funcionarios])
{
	int i, j;
	float soma;
	
	for(i = 0; i < meses; i++)
	{
		for(j = 0; j < funcionarios; j++)
		{
			soma+= vendas[i][j];
		}
		
	}
	return soma;
}
float totalvendidosmes(float vendas[meses][funcionarios], int mes)
{
	int j;
	float soma;
	
	mes--;
	
	for(j = 0; j < funcionarios; j++)
	{
		soma+= vendas[mes][j];
	}
	return soma;
}
float totalvendasfuncionarios(float vendas[meses][funcionarios], int funcio)
{
	int i;
	float soma = 0;
	
	funcio--;
	
	for(i = 0; i < meses; i++)
	{
		soma+=vendas[i][funcio];
	}
	return soma;
}
int mesmaiorindicedevendas(float vendas[meses][funcionarios])
{
	float maior = totalvendidosmes(vendas, 1); //janeiro
	int i, mes = 1, total;
	
	for(i = 2; i < meses; i++)
	{
		total = totalvendidosmes(vendas, i);
		
		if(total > maior)
		{
			maior = total;
			mes = i;
		}
	}
	return mes;
}
int funciomaiorindicevendas(float vendas[meses][funcionarios])
{
	float menor = totalvendasfuncionarios(vendas, 1);
	int j, funcionario = 1;
	float total;
	
	for(j = 2; j < funcionarios; j++)
	{
		total = totalvendasfuncionarios(vendas, j);
		
		if(total < menor)
		{
			menor = total;
			funcionario = j;
		}
	}
	return funcionario;
}

void aleatorio(float matriz[meses][funcionarios])
{
    int i, j;
    
    //srand(time(NULL));

    for(i = 0; i < meses; i++)
    {
    	
        for(j = 0; j < funcionarios; j++)
        {
            matriz[i][j] = 1+rand() % 100;
        }
        
    }
}
void exibir(float mat[meses][funcionarios])
{
    int i, j;

    for(i = 0; i < meses; i++)
    {
        for(j = 0; j < funcionarios; j++)
        {
            printf("%4.1f ", mat[i][j]);
        }
        printf("\n");
    }
}
