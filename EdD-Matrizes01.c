#include <stdio.h>
#include <stdlib.h>

int main(){
    int R[4][5],i,j,maior,posi,posj;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
        	printf("Insira um numero inteiro na posicao [%d][%d]= ",i,j);
        	scanf("%d",&R[i][j]);
        	if (i == 0 && j == 0){
            	maior=R[0][0];
        	}
        	if(R[i][j]>maior){
            maior=R[i][j];
            posi=i;
            posj=j;
           }
        }
        
    }
    printf("O maior numero e= %d\n",maior);
    printf("Esta na posicao= [%d][%d]", posi,posj);
    
    system("pause");
	return 0;
    getch();
}
