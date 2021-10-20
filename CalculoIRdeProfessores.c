/*
O programa deverá solicitar a carga horaria do professor, ou seja, a quantidade de hora/aula que esse professor ministra na semana.
O salário do professor é baseado na quantidade de aulas da semana, multiplicado por 4.5, e depois multiplicado pelo valor da hora aula do professor. 
Em nosso programa, o valor da h/a será dividido em 3 categorias:
1- Valor mínimo – R$ 22,50
2- Valor intermediário – R$ 35,90
3- Valor máximo – R$ 59,90
Depois de calculado o valor do salário do professor, o programa deverá calcular o valor do desconto no IR, que será dividido em 3 categorias:
Até R$3000,00 – desconto de 7,5%
De R$ 3000,01 até R$6000,00 desconto de 18%
Maior que R$6000,00 desconto de 27,5%
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int aulaporsemana;
	float valorhoraaula, total;
	printf("Digite a quantidade de aulas= ");
	scanf("%d",&aulaporsemana);
	printf("Digite o valor da hora aula= ");
	scanf("%f",&valorhoraaula);
	total=((aulaporsemana*4.5)*valorhoraaula);
	printf("O salario e= %.2f\n",total);
	if(total<3000){
		printf("IR pago e= %.2f",total-total*0.75);
	}	
}
