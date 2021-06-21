#include <stdlib.h>
#include <stdio.h>

int main(){
	int L,C,i,j,posi;
	float soma=0,maior;
	float B[L][C];
	float somaLinhas[i];
	printf("Informe o numero de linhas= ");
	scanf("%d",&L);
	printf("Informe o numero de colunas= ");
	scanf("%d",&C);
	for(i=0;i<L;i++){
		for(j=0;j<C;j++){
			printf("Insira um numero [%d][%d]= ",i,j);
			scanf("%f",&B[i][j]);
		}
	}
	for(i=0;i<L;i++){
		soma=0;
		for(j=0;j<C;j++){
			soma+=B[i][j];
			somaLinhas[i]=soma;
		}
	}
	for(i=0;i<L;i++){
		if(somaLinhas[i]>maior){
			maior=somaLinhas[i];
			posi=i;
		}
	}
	for(i=0;i<L;i++){
		if(somaLinhas[i]==maior){
			printf("\n\nA linha com a maior soma e a= %d \n\n", posi);
		}
	}
	
	system("pause");
	return 0;
	getch();
}
