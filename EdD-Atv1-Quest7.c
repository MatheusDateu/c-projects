int soma_num(int num) 
{
   int resultado;
   if (num == 1) 
    {
      return (1);
    }
   else 
    {
      resultado = num * soma_num(num - 1);
    }
   return resultado;
}

int main() 
{
   int num_N;
   int somatorio;

   printf("\n\t Somatoria de todos os numeros de 1 a N:\n"); 
   printf("\n Digite N : ");
   scanf("%d", &num_N);
   somatorio = soma_num(num_N);
   printf("\n A soma dos numeros de 1 ate %d = %d \n", num_N, somatorio);

 return 0; 
}
