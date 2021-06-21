#include<stdio.h>
#include<stdlib.h>

main(){
    int i, vet[20], n, ig=0, ma=0, me=0;
    
    
    for(i=0; i<20; i++){
        printf("Digite o %d° valor: " ,i+1);
        scanf("%d", &n);
        vet[i]=n;
        
        if(vet[0]==vet[i]){
            ig++;
        }
        if(vet[0]<vet[i]){
            ma++;
        }
        if(vet[0]>vet[i]){
            me++;
        }
    }
    printf("Numeros maiores que o primeiro valor: %d\n", ma);
    printf("Numeros iguais que o primeiro valor: %d\n", ig-1);
    printf("Numeros menores que o primeiro valor: %d\n", me);
    
    system("PAUSE");
}
