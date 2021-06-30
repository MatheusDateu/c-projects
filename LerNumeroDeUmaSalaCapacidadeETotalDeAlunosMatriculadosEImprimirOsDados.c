#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int numerosala, capacidade, alunosmatriculados;
	scanf("%d",&numerosala);
	scanf("%d",&capacidade);
	scanf("%d",&alunosmatriculados);	
	if (alunosmatriculados >= capacidade){
		printf("SALA = %d\n",numerosala);
		printf("CAPACIDADE = %d\n",capacidade);
		printf("CADEIRAS OCUPADAS = %d\n",alunosmatriculados);
		printf("SALA LOTADA\n");
	}else if (alunosmatriculados<capacidade){
		printf("SALA = %d\n",numerosala);
		printf("CAPACIDADE = %d\n",capacidade);
		printf("CADEIRAS OCUPADAS = %d\n",alunosmatriculados);
		printf("SALA NAO LOTADA\n");
	}	

	system("PAUSE");
	return 0;
	getch();
}
