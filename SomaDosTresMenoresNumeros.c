#include <stdio.h>
#include <math.h>

int main(){
	int numero1, numero2, numero3, numero4, soma;
	scanf("%d",&numero1);
	scanf("%d",&numero2);
	scanf("%d",&numero3);
	scanf("%d",&numero4);	
	if(numero1 > numero2 && numero1 > numero3 && numero1 > numero4){
		soma = (numero2 + numero3 + numero4);
		printf("%d\n",soma);
	}
	else if(numero2 > numero1 && numero2 > numero3 && numero2 > numero4){
		soma = numero1 + numero3 + numero4;
		printf("%d\n",soma);
	}
	else if(numero3 > numero1 && numero3 > numero2 && numero3 > numero4){
		soma = numero1 + numero2 + numero4;
		printf("%d\n",soma);
	}
	else if(numero4 > numero1 && numero4 > numero2 && numero4 > numero3)
	{
	soma = numero1 + numero2 + numero3;
	printf("%d\n",soma);
	}
	
	system("PAUSE");
	return 0;
	getch();
}
