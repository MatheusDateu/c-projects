#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
 char nome[30], endereco[60], telefone[15];
 printf("Informe seu nome= ");
 gets(nome);
 printf("Informe seu endereco= ");
 gets(endereco);
 printf("Informe seu telefone= ");
 gets(telefone);
 printf("\n\nNome: %s\n\n",nome);
 printf("Endereco: %s\n\n",endereco);
 printf("Telefone: %s\n\n",telefone);
 getch();
 system("PAUSE");
 return (0);
} 
