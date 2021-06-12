#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
	char nome[30],sexo;
	int idade;
	printf("Informe seu nome= ");
	gets(nome);
	printf("Informe seu sexo= ");
	scanf("%c",&sexo);
	printf("Informe sua idade= ");
	scanf("%d",&idade);
	if (sexo=='F'||sexo=='M'&&idade< 25)
	{
	printf("\n%s. ACEITA.\n\n", nome);
	}
	else
	{
	printf("\nNAO ACEITA.\n\n");
	}
	getch(0);
	system("PAUSE");
	return (0);
} 
