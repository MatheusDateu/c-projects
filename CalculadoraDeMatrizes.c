#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (void){
	setlocale(LC_ALL, "Portuguese");
	int Lin,Col,n,m;
	float num;
	float matriz[n][m];
	printf("Informe a quantidade de linhas que a matriz terá= ");
	scanf("%d",&Lin);
	printf("Informe a quantidade de colunas que a matriz terá= ");
	scanf("%d",&Col);
	for (n=0;n<Lin;n++){
		for (m=0;m<Col;m++){
			printf("Digite o valor da posição [%d][%d]= ",n,m);
			scanf("%f",&num);
		}
	}
	
	return 0;
	system("PAUSE");
	getch();
}
