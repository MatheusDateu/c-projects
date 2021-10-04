#include <stdio.h>
#include <stdlib.h>

int pot(int base, int exp) //parametros que receberao os valores da base e do expoente, respectivamente
{
    int res= 1; //variavel que recebera o resultado exponenciação
    int i= exp; //variavel de controle (index)
    /*
    Testa expoente, se igual a 0,
    retorna valor 1, pois, segundo a regra matematica, qualquer numero
    elevado a 0 e igual a 1
    */
    if (exp==0){
    	return 1;
	}
	/*
	Se o expoente não for igual a 0, entao
	o resulado sera igual a ele mesmo multiplicado pelo valor da base
	a quantidade de vezes que o expoente indica
	*/
    else{
        for (i;i>0;){ //enquanto expoente for maior que 0
        	res = res * base;
        	i--; //decremento, para ir diminuindo um numero sempre que completar um ciclo
		}
		return res; //retorna o resultado final do 
    }
}

int main(void)
{
    int num1 = 5, num2 = 0, result; //num1= primeiro numero do RU, num2= ultimo numero do RU, result vai receber o valor retornado da funcao pot
    	/*
    	result chama a funcao pot para receber o valor retornado dela
    	*/
        result = pot (num1, num2); //passando num1 e num2 como parametro para a funcao pot
        printf("O resultado de %d elevado a %d e= %d\n", num1, num2, result); //imprime o resultado final da exponenciacao
  
	system("pause");
	return 0;
}
