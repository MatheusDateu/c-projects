#include<stdio.h>
#include<math.h>

int main()
{
int numero;

scanf("%d",&numero);

if (numero < 0)
{
printf("NEGATIVO\n");
}
else if (numero > 0)
{
printf("POSITIVO\n");
}

if (numero % 3 != 0)
{
printf("NAO MULTIPLO DE 3\n");
}

else if (numero % 3 == 0)
{
printf("MULTIPLO DE 3\n");
}
return 0;	
}
