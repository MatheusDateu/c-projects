#include <stdio.h>
#include <stdlib.h>

int main(){
	float temp[7];
	int i,soma,adicao=0;
	float media;
	
	for(i=0;i<7;i++){
		printf("Digite uma temperatura= ");
		scanf("%f",&temp[i]);
		soma=soma+temp[i];
	}
	printf("\n");
	media= soma / 7;
	printf("A media das temperaturas da semana e= %.2f\n\n", media);
	for(i=0;i<7;i++){
		if(temp[i]>media){
			adicao=adicao+1;
		}
	}
	printf("A quantidade de dias com temperaturas acima da media e= %d\n\n",adicao);
	
	system("PAUSE");
	return 0;
	getch();
}
