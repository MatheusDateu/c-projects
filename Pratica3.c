#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_hexa(float L, float *area, float *perimetro){//funcao que recebe por parametro valor de L e pede para que seja executados a linha de area e perimetro
	*area=3*pow(L,2)*sqrt(3)/2;//formula do calculo da area de um hexagono
	*perimetro=6*L;//formula do calculo do perimetro de um hexagono
}
float main(){//metodo principal
	float L, perimetro, area;//declarando a variavel L, responsavel por receber o valor do lado do hexagono
	printf("Informe o valor do lado= ");//pede para o usuario que informe o valor de um lado de um hexagono
	scanf("%f",&L);//le e aloca na memoria o valor informado pelo usuario
	if(L<0){//condicao que verifica se e um valor valido
		printf_s("Informe um valor positivo!\n");//caso nao seja um valor valido, pede para que o usuario informe um valor positivo/valido
		system("pause");//encerra o programa
		exit(1);
	}
	else{//caso o valor informado seja valido:
		calc_hexa(L,&area,&perimetro);//chama a funcao calc_hexa e envi como parametro o vlaor de L e recebe o resultado de area e perimetro
		printf("A area e= %.2f\n",area);//imprime o valor da area do hexagono com lado informado pelo usuario
		printf("O perimetro e= %.2f\n", perimetro);//imprime o valor do perimetro do hexagono com lado informado pelo usuario
	}
	system("pause");
	return 0;
}
