#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i,num;
	char palavras[num][40];
	printf("Informe quantas palavras deseja inserir= ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("Informe uma palavra= ");
		scanf("%s",&palavras[i]);
		printf("\n");
	}
	for (i=num;i>=0;i--){
		printf("%s",palavras[i]);
		printf("\n");
	}
	
	system("PAUSE");
	return 0;
	getch();
}
