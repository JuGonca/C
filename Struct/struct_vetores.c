#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>/*bibliotecas mais amplamente usadas por oferecer suporte a operações básicas de 
				   manipulação de memória, controle de execução e conversão de dados.*/
				   
//Informar mebros

struct Membros{
	char nome[50];
	int idade;
	char universo[30];
};

typedef struct Membros membros;

int main(){
	
	membros representantes[5];//vetor com 5 posições
	int i; //indice das posições
	
	for(i = 0; i<5; i++){
		printf("\nInsira os dados: \n");
		
		printf("Nome: ");
		scanf("%s", &representantes[i].nome);//adiciona o dado dentro do campo na posição informada
		
		printf("Idade: ");
		scanf("%d", &representantes[i].idade);
		
		printf("Universo: ");
		scanf("%s", &representantes[i].universo);
	
	}
	system("clear");
	printf("\n\nDados modificados: \n");
	for(i = 0; i<5; i++){
		
		printf("\nMembro %d", i);
		printf("\n Nome: %s", representantes[i].nome);
		printf("\n Idade: %d", representantes[i].idade);
		printf("\n Universo: %s", representantes[i].universo);
	}
}