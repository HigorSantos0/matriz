/*
Desenvolver uma função que, dada uma string
s, determine se todos os seus caracteres são
distintos.
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

int stringDistintos(char s[]);

void main()
{
	char s[20];
	int resp;
	
	printf("Entre com a string: ");
	fflush(stdin);
	gets(s);
	
	resp = stringDistintos(s);
	
	if(resp == TRUE)
	{
		printf("String distinta");
	}
	else
		{
			printf("String nao distinta");
		}
	
}

int stringDistintos(char s[])
{
	int i, j, retornar, quant;
	
	quant = 0;
	
	for(i = 0; s[i]; i++)
	{
		//retornar = FALSE;
		
		for(j = 0; j < i; j++)
		{
			if(s[i] != s[j])
			{
				quant++;
				return TRUE;
			}
		}
	}
	if(quant == 0)
	{
		return FALSE;
	}
}
