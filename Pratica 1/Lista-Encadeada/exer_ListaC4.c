//Pedir para o usuário digitar 5 números
//Inserílos no inicio da lista
//Imprimir a nova lista

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int valor;
	struct No *prox;
}No;

int main(){
	//Alocando espaço na memória
	No *n1 = (No *)malloc(sizeof(No));
	No *n2 = (No *)malloc(sizeof(No));
	No *n3 = (No *)malloc(sizeof(No));
	No *n4 = (No *)malloc(sizeof(No));
	No *n5 = (No *)malloc(sizeof(No));
	
	//Solicitando dados
	printf("Informe 5 números inteiros: \n");
	scanf("%d", &n1->valor);
	scanf("%d", &n2->valor);
	scanf("%d", &n3->valor);
	scanf("%d", &n4->valor);
	scanf("%d", &n5->valor);
	
	//Encadeando elementos da lista;
	n1->prox = NULL;
	n2->prox = n1;
	n3->prox = n2;
	n4->prox = n3;
	n5->prox = n4;
	
	//imprimindo valores na tela
	No *atual = n5;
	printf("\nImprimindo lista:\n");
	while(atual != NULL){
		printf("%d\n", atual->valor);
		atual = atual->prox;
	}
	
}
