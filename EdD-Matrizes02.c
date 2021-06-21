#include <stdio.h>
#include <stdlib.h>

int main(){
	int M,i,j;
	int A[M][M];
	float media,soma=0;
	printf("Insira o valor da ordem da matriz= ");
	scanf("%d",&M);
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			printf("Insira o valor [%d][%d]= ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			if(i==j){
				soma+=A[i][j];
			}		
		}
	}
	media=soma/M;
	printf("Media da diagonal e= %.2f\n", media);
	
	system("pause");
	return 0;
	getch();
}
