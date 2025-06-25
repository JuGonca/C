#include <stdio.h>
#include <stdlib.h>

//Ler números inteiros até o usuário digitar um número negativo
//Inserir cada número no final da lista encadealda
//Solicitar ao usuário um número para remover
//Remover o primeiro nó que contenha esse número
//imprimir a lista antes e depois da remoção

typedef struct{
	int valor;
	struct No *prox;
}No;

int main(){
	No *inicio = NULL;//guarda o primeiro número da lista
	No *ultimo = NULL;//guarda o último numero da lista
	int numero;
	
	printf("\nDigite um número (negativo para sair):\n");
	//Loop para receber valores da lista
	while(1){
		scanf("%d", &numero);
		if(numero < 0)
			break; //interrompe o loop se o valor for negativo
		
		//Alocando espaço na memória para os valores
		No *novo_no = (No *)malloc(sizeof(No));
		novo_no->valor = numero;
		novo_no->prox = NULL;
		
		//Aponta o primeiro valor informado no nó
		if(inicio == NULL)
			inicio=novo_no;
		//Aponta os seguintes 
		else
			ultimo->prox = novo_no;
		
		ultimo = novo_no;
	}
	
	//Imprimindo a lista antes da remoção
	No *atual = inicio;
	while(atual != NULL){
		printf("\n%d", atual->valor);
		atual = atual->prox;
	}
	
	//Solicitando número para remover
	int removNum;
	printf("\nDigite um número para remover da lista: ");
	scanf("%d", &removNum);
	
	atual = inicio;
	No *anterior = NULL;
	
	//Loop para remover o valor escolhido 
	while(atual != NULL && atual->valor != removNum){
		anterior = atual;
		atual = atual->prox;
	}
		
		if(atual == NULL){
			printf("\nValor não encontrado na lista.\n");
		}
		else {
			if (anterior == NULL) {
				// É o primeiro nó
				inicio = atual->prox;
			} 
			else {
				// Nó no meio ou fim
				anterior->prox = atual->prox;
			}
			free(atual);
			printf("\nNó com valor %d removido.\n", removNum);
		}
	
	
	//Loop para imprimir os valores da lista na tela
	atual = inicio;
	while(atual != NULL){
		printf("\n%d", atual->valor);
		atual = atual->prox;
	}
}
