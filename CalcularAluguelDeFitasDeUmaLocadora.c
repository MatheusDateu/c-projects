#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float preconormal, descontopromo, precototal;
	char dia[15], categoria[15];	
	scanf("%f",&preconormal);
	scanf("%s",dia);
	scanf("%s",categoria);	
	if (strcmp(dia,"SEGUNDA")==0||strcmp(dia,"TERCA")==0||strcmp(dia,"QUINTA")==0){
		descontopromo=preconormal-(0.4*preconormal) ;
	}	
	else if(strcmp(dia,"QUARTA")==0||strcmp(dia,"SEXTA")==0||strcmp(dia,"SABADO")==0||strcmp(dia,"DOMINGO")==0){
		descontopromo=0;
	}	
	if(strcmp(categoria,"LANCAMENTO")==0){
		preconormal=(preconormal*0.15);	
	}else if(strcmp(categoria,"COMUM")==0){
		preconormal=preconormal;	
	}	
	precototal=descontopromo+preconormal;
	printf("PRECO FINAL= %.2f\n",precototal);
	
	system("PAUSE");
	return 0;
	getch();	
}
