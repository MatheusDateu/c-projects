#include<stdio.h>
#include<stdlib.h>

int repeticoes_de_x(int vetor[j], int numero, int tamanho){
	int repeticoes=0;
	for(j=0; j<tamanho; j++){
	    if(numero==vetor[j]){
	        repeticoes++;
	    }
	return repeticoes;
    }
}
int main(){
    int i, tam, vet[], n, num=0;
    
    
    for(i=0; i<tam; i++){
        printf("Digite o %d° valor do vetor= " ,i+1);
        scanf("%d", &n);
        vet[i]=n;
    }
    printf("Informe o valor que deseja saber quantas vezes se repete= ");
    scanf("%d",&num);
    for (i=0;i<tam;i++){
    	num= repeticoes_de_x(vet[i], num, tam);
	}
    printf("Numeros maiores que o primeiro valor= %d\n", ig);
    
    getch();
    system("PAUSE");
    return 0;
}
