#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
 int numi=1,tam,x;
 char NOME[100];
 
 printf ("Informe um nome= ");
 gets(NOME);
 tam=strlen(NOME);
 printf("\nAs letras na posicao impar sao= ",x);
 while(numi<=tam)
 {
 printf(" %c ",NOME[numi]);
 numi=numi+2;
 }
 printf ("\n");
 printf("\n\tNome digitado: %s\t",NOME);
 printf ("\n\n");
 getch;
 system("PAUSE");
 return (0);
} 
