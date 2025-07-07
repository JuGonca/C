#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int valor;
	struct itemLista *prox;
}itemLista;

int main(){
	int num; //recebe valor informado pelo usuário
	itemLista *inicio = NULL;
	
	//Revebe Valores
	printf("\nInforme os valores para inserir na lista: \n");
	while(1){
		scanf("%d", &num);
        if (num < 0)
            break;
        inserirValor(&inicio, num);
	}
	
	//Mostra na Tela
	printf("\nLista Atual: \n");
	itemLista *atual = inicio;
	while(atual != NULL){
		printf("\n%d", atual->valor);
		atual = atual->prox;
	}
	
	//Recebe valor para remover
	printf("\ninforme um número para remover da lista \n");
	scanf("%d", &num);
	removerValor(&inicio, num);
	
	
	//Mostra na tela
	printf("\nNova Lista: \n");
	atual = inicio;
	while(atual != NULL){
		printf("\n%d", atual->valor);
		atual = atual->prox;
	}
	
	return 0;
}

//Funções
void inserirValor(itemLista **inicio, int x){
	//alocando espaço para um ponteiro intermediario
	itemLista *novo = (itemLista *)malloc(sizeof(itemLista));
	novo->valor = x;
	novo->prox = NULL;
	
	//verifica se o *inicio está vazio
	if(*inicio == NULL)
		*inicio = novo;//atribui o *novo para o *inicio
	else{
		itemLista *atual = *inicio; //variavel que vai percorrer a lista
		//percorre a lista até não ter mais valores
		while(atual->prox != NULL){
			atual = atual->prox;
		}
		atual->prox = novo; //o *novo é atribuido no final da lista
	}
}

void removerValor(itemLista **inicio, int x) {
    itemLista *atual = *inicio;
    itemLista *anterior = NULL;

    while (atual != NULL && atual->valor != x) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        printf("Valor %d não encontrado na lista.\n", x);
        return;
    }

    if (anterior == NULL)
        // Remover o primeiro nó
        *inicio = atual->prox;
	else
        anterior->prox = atual->prox;

    free(atual);
    printf("Valor %d removido.\n", x);
}