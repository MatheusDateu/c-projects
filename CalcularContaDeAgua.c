#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
int contacliente, consumoagua;
float formula;
char tipoconsumidor[15];

scanf("%d",&contacliente);
scanf("%d",&consumoagua);
scanf("%s",tipoconsumidor);

if (strcmp(tipoconsumidor,"RESIDENCIAL") == 0){
formula = 5.00 + (0.05 * consumoagua);
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f\n",formula);
}

if (strcmp(tipoconsumidor,"COMERCIAL") == 0 && consumoagua <= 80 ){
formula = 500.00;
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f\n",formula);
}

else if (strcmp(tipoconsumidor,"COMERCIAL") == 0 && consumoagua > 80 ){
formula = 500.00 + ((consumoagua - 80) * 0.25);
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f\n",formula);
}

if (strcmp(tipoconsumidor,"INDUSTRIAL") == 0 && consumoagua <= 100){
formula = 800.00;
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f",formula);
}
else if (strcmp(tipoconsumidor,"INDUSTRIAL") == 0 && consumoagua > 100){
formula = 800.00 + ((consumoagua - 100 )* 0.04);
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2f\n",formula);
}

return 0;	

}
