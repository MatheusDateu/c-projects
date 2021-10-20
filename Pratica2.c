#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i;//index, variavel de controle
	char v[6];//vetor de 6 posições
	printf("Informe o seu RU= ");//pede para o usuario informar seu RU
	for (i = 0; i < 6; i++) {//laco for que aloca cada numero do RU em um espaco da memoria
		scanf("%c", &v[i]);//le e aloca em um espaco da memoria numero por numero do RU informado
	}
	char *p = (char *) &v;//ponteiro apontado para o espaco na memoria onde se encontra o vetor
	char maior = p[0];//declarando variavel que ira receber o valor do maior numero do vetor/RU
	char menor = p[0];//declarando variavel que ira receber o valor do menor numero do vetor/RU
	for (i = 0; i < 6; i++) {//laco for que realiza a verificacao de qual o maior numero
	    if (p[i] > maior) {//condicao que verifica qual o maior numero
	        maior = p[i];//quando a variavel maior recebe o valor do maior numero, ate o momento
	    }
	    if (p[i] < menor) {//condicao que realiza a verificacao de qual o menor numero
	        menor = p[i];//quando a variavel menor recebe o valor do menor numero, ate o momento
	    }
	}
	printf("\nO maior numero deste RU e= %c\nO menor numero deste vetor e= %c\n", maior, menor);//imprimindo na tela o maior e o menor numero
	
	system("pause");
	return 0;
}
