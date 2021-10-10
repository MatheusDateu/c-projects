/*
Crie um programa, em linguagem C, que receba 10 registros contendo, Nome, RU, telefone 
email. Solicite que sejam digitados todos os dados de todos os registros e ao final salve-os em um 
arquivo.csv, utilize o ; (ponto e vírgula) para separador e campo. O nome do arquivo deve ser o seu 
número de RU
*/
#include <stdio.h>
#include <stdlib.h>

struct registros{//Estrutura que irá armazenar as variáveis do Registro
		char nome[40];//variável que vai armazenar o primeiro nome
		double RU;//variável que vai armazenar o RU
		double fone;//Variável que vai armazenar o número de telefone
		char email[30];//Variável que vai armazenar o endereço de e-mail
	};
int main (){
	int i;//Variável de controle (contagem, index)
	struct registros R[10];//Chamando a Estrutura Registro, declarando a estrutura de registro "R" com 10 posições
	FILE *arquivo;//Declarando o arquivo com o ponteiro "arquivo"
	arquivo=fopen("512410.csv","w");//Abrindo o arquivo do tipo .csv com meu RU sendo o nome,tipo de abertura: criar um nome ou sobrescrever o já existente "w"
	/*
	Logo abaixo, estrutura if-else que verifica se o arquivo foi aberto ou não
	*/
	if (arquivo == NULL) {
		printf("ERRO! O arquivo não foi aberto!\n");
	}else {
		printf("O arquivo foi aberto com sucesso!\n");
	}
	/*
	Laço for usado para pedir ao usuário que informe os dados de cada aluno, no total, serão 10 registros
	*/
	for(i=0;i<10;i++){
			printf("Informe o primeiro nome= ");
			scanf("%s",&R[i].nome);
			printf("\nInforme seu RU= ");
			scanf("%d",&R[i].RU);
			printf("\nInforme o numero de telefone= ");
			scanf("%d",&R[i].fone);
			printf("\nInforme seu email= ");
			scanf("%s",&R[i].email);			
	}
	/*
	Laço for que escreve todoso os registros no arquivo "512410.csv" separando-os por ";"(ponto e vírgula)
	*/
	for(i=0;i<10;i++){
		fprintf(arquivo, "%s; %d; %d; %s",&R[i].nome,&R[i].RU,&R[i].fone,&R[i].email);
	}
	fclose(arquivo);//Fechando o arquivo
	
	system("pause");
	return 0;
}
