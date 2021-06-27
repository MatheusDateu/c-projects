#include<stdio.h>
#include<math.h>

	int main(void){
	int numero;
	scanf("%d",&numero);
	if (((numero % 5)==0) && ((numero % 3)==0)){
		printf("O NUMERO E DIVISIVEL\n");
	}
	else{
		printf("O NUMERO NAO E DIVISIVEL\n");
	}	
	system("PAUSE");
	return 0;
	getch();
}
