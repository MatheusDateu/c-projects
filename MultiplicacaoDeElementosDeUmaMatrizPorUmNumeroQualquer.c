#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	int i,j,l,c;
	float matriz[l][c],num;
	printf("Informe o número de linhas da matriz= ");
	scanf("%d",&l);
	printf("Informe o número de colunas da matriz= ");
	scanf("%d",&c);
	for (i=0;i<l;i++){
		for (j=0;j<c;j++){
			printf("Informe o valor que ocupará a posição [%d][%d]= ",i,j);
			scanf("%f",&matriz[i][j]);
		}
	}
	printf("Informe o número que irá multiplicar cada elemento da matriz= ");
	scanf("%f",&num);
	for (i=0;i<l;i++){
		for (j=0;j<c;j++){
			matriz[i][j]*=num;
		}
	}
	
	system("PAUSE");
	return 0;
	getch();
}
