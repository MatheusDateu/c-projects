#include <stdio.h>
#include <stdlib.h>

int pot(int base, int exp) //parametros que receberão os valores da base e do expoente, respectivamente
{
    int res;
    int i= exp;
    if (exp==0){
    	return 1;
	}

    else{
        for (i;i>0;){
        	res = res * base;
        	printf("opa\n");
        	i--;
		}
		return res;
        //return (base * pot (base, exp - 1));
    }
}

int main()
{
    int num1 = 5, num2 = 5, result;
        result = pot (num1, num2);
        printf("%d\n", result);
  
	system("pause");
	return result;
}
