#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	int i,j,l,c;
	float matriz[l][c],num;
	printf("Informe o n�mero de linhas da matriz= ");
	scanf("%d",&l);
	printf("Informe o n�mero de colunas da matriz= ");
	scanf("%d",&c);
	for (i=0;i<l;i++){
		for (j=0;j<c;j++){
			printf("Informe o valor que ocupar� a posi��o [%d][%d]= ",i,j);
			scanf("%f",&matriz[i][j]);
		}
	}
	printf("Informe o n�mero que ir� multiplicar cada elemento da matriz= ");
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
