#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contactos{
	char nome[15];
	int num;
};

struct contactos contatos[5];

void main(){
	int i;	
	for(i=0;i<5;i++){
		printf("\nInforme o nome do contato= ");
		scanf("%s",&contatos[i].nome);
		printf("%s",contatos[i].nome);
		printf("\nInforme o numero do contato= ");
		scanf("%d",&contatos[i].num);
		printf("%d",contatos[i].num);
	}
	
	for(i=0;i<5;i++){
		printf("\nNome do contato= %s",contatos[i].nome);
		printf("\nNumero do contato= %d",contatos[i].num);
	}
	printf("\n\n");
	getch();
	system("pause");
}
