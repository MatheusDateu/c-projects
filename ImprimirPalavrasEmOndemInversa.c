#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese"); //comando que permite compilar palavras assentuadas
	int i,num; //i=vari�vel de controle; num= vari�vel que receber� quantas palavras haver�o
	char palavras[num][40];	//40 � o m�ximo de caracteres que poder�o ser inseridos por palavra
	printf("Informe quantas palavras deseja inserir= ");
	scanf("%d",&num);
	//ciclo que grardar� as palavras inseridas pelo usu�rio
	for (i=0;i<num;i++){
		printf("Informe uma palavra= ");
		scanf("%s",&palavras[i]);
		printf("\n");
	}
	//ciclo que imprimir� as palavras na ordem inversa a que foram informadas
	for (i=num;i>=0;i--){
		printf("%s",palavras[i]);
		printf("\n");
	}
	
	system("PAUSE");
	return 0;
	getch();
}
