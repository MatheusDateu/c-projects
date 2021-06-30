#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
	int conteudo,dureza,resistencia;
	scanf("%d",&conteudo);
	scanf("%d",&dureza);
	scanf("%d",&resistencia);
	if(conteudo<7&&dureza>50&&resistencia>80000){
		printf("ACO DE GRAU= 10\n");
	}else if(conteudo<7&&dureza>50&&resistencia<=80000) {
		printf("ACO DE GRAU= 9\n");
	}else if(conteudo<7&&dureza<=50&&resistencia<=80000){
		printf("ACO DE GRAU=8\n");
	}else if(conteudo>=7&&dureza<=50&&resistencia<=80000){
		printf("ACO DE GRAU=7\n");
	}	
	
	system("PAUSE");
	return 0;
	getch();
}
