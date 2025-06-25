#include <stdio.h>
#include <stdlib.h>

//Leia 5 números inteiros do usuário e armazene em uma lista cadeada
//Imprima todos os números da lista
//Remova o nó que tiver o valor mais alto
//Imprima a lista novamente

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
	
	//Atribuindo valores
	printf("Informe 5 números inteiros: \n");
	scanf("%d", &n1->valor);
	scanf("%d", &n2->valor);
	scanf("%d", &n3->valor);
	scanf("%d", &n4->valor);
	scanf("%d", &n5->valor);
	
	//Encadeando valores da lista
	n1->prox = n2;
	n2->prox = n3;
	n3->prox = n4;
	n4->prox = n5;
	n5->prox = NULL;
	
	//Imprimindo valores na tela
	No *atual = n1;
	while(atual != NULL){
		printf("\n%d", atual->valor);
		atual = atual->prox;
	}
	
	//Verificando qual valor é o maior
	No *aux = n1;
	No *nMaior = 0;
	
	while(aux != NULL){
		if(nMaior < aux->valor){
			nMaior = aux->valor;
		}
		else{
			aux = aux->prox;
		}
	}
	
	// Removendo o nó que possui o maior valor
	No *inicio = n1;  // Ponteiro para o início da lista
	atual = inicio;
	No *anterior = NULL;

	// Procurando o nó que tem o maior valor
	while (atual != NULL && atual->valor != nMaior) {
		anterior = atual;
		atual = atual->prox;
	}

	if (atual == NULL) {
		printf("\nValor não encontrado.\n");
	} 
	else{
		if (anterior == NULL) {
			// O maior está no primeiro nó
			inicio = atual->prox;
		}
		else {
			// O maior está no meio ou fim
			anterior->prox = atual->prox;
		}
		free(atual);
		printf("\nNó com valor %d removido.\n", nMaior);
	}

	// Imprimindo lista atualizada
	printf("\nNova lista:\n");
	atual = inicio;
	while (atual != NULL) {
		printf("\n%d ", atual->valor);
		atual = atual->prox;
	}
}
