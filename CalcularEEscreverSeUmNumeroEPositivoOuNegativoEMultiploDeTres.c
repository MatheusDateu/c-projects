#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int numero;
	scanf("%d",&numero);	
	if(numero<0){
		printf("NEGATIVO\n");
	}
	else if (numero>0){
		printf("POSITIVO\n");
	}if (numero%3!=0){
		printf("NAO MULTIPLO DE 3\n");
	}else if(numero%3==0)
	{
		printf("MULTIPLO DE 3\n");
	}
	
	system("PAUSE");
	return 0;
	getch();
}
