#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(){
	char nome[80];
	int i;
	printf("Informe um nome= ");
	gets(nome);
	for(i=0;i<=3;i++){
		printf("%c",nome[i]);
	}
	printf("\n\n");
	getch;
	system("pause");
	return(0);
}
