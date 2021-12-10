#include <stdio.h>
#include <stdlib.h>

int paresd(int n){
  	 if (n == 0) return 0;
  	else if (n %2 == 0){
    		printf("%d\n", n);  
  	}
  return paresd(n - 1);
}
int main(void){
  int n;
  
  printf("Digite um número\n");
  scanf("%d", &n);
  paresd(n);
  return 0;
}
