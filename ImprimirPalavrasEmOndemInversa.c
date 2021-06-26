#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese"); //comando que permite compilar palavras assentuadas
	int i,num; //i=variável de controle; num= variável que receberá quantas palavras haverão
	char palavras[num][40];	//40 é o máximo de caracteres que poderão ser inseridos por palavra
	printf("Informe quantas palavras deseja inserir= ");
	scanf("%d",&num);
	//ciclo que grardará as palavras inseridas pelo usuário
	for (i=0;i<num;i++){
		printf("Informe uma palavra= ");
		scanf("%s",&palavras[i]);
		printf("\n");
	}
	//ciclo que imprimirá as palavras na ordem inversa a que foram informadas
	for (i=num;i>=0;i--){
		printf("%s",palavras[i]);
		printf("\n");
	}
	
	system("PAUSE");
	return 0;
	getch();
}
