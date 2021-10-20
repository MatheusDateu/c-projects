#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Registro {//criando struct/registro
	int ru;//campo do registro que ira armazenar o valor do RU
	char nome[60];//campo do registro que ira armazenar o valor do nome
};
int main(void){
	struct Registro R;//declarando o registro "R"
	printf("Digite seu RU: ");//pedindo ao usuario que informe seu RU
	scanf("%d", &R.ru);//lendo e alocando no campo RU
	printf("Informe seu nome: ");//pedindo ao usuario que informe seu nome
	fflush(stdin);//limpando o excesso de buff da memoria
	fgets(R.nome, 60, stdin);//coletando e alocando os caracteres informados no campo nome
	sscanf(R.nome,"%c",&R.nome);//lendo o campo nome do registro "R"
	size_t tam = strlen(R.nome);//declarando variavel "tam" que ira armazerar o tamanho do nome informado (para que possamos trabalhar com a largura maxima)
	char *p = (char *) &R.nome;//declarando ponteiro apontando para o campo nome do registro "R"
	while(tam--){//laco while/do decrementador
		printf("%c", p[tam]);//imprime o que esta abrangido pelo ponteiro a partir da largura, ou seja, do ultimo caracter para o primeiro
	}
	
	return 0;
}
