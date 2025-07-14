#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int valor;
	struct No *prox;
}No;

int main(){
	int num;
	No *inicio = NULL, *fim = NULL;
	
	printf("\nDigite um número inteiro(digite negativo para encerrar): \n");
	while(1){
		scanf("%d", &num);
		if (num < 0)
            break;
		inserirValor(&inicio, num);
		
	}
	listarValor(&inicio);
	
	printf("\n\nRemovendo primeiro valor da fila\n");
	removerValor(&inicio);
	listarValor(&inicio);
}
//Função para inserir valor na lista
void inserirValor(No **inicio, int x){
	No* novo = (No *)malloc(sizeof(No));
	novo->valor = x;
	novo->prox = NULL;
	
	
	if(*inicio == NULL)
		*inicio = novo;//se não tiver inicio, adiciona novo valor
	else{
		No *fim = *inicio;//variavel para percorrer a fila
		while(fim->prox != NULL){
			fim = fim->prox; //percorre a lista até encontrar o seu fim
		}
		fim->prox = novo; //Adiciona o novo valor ao final da fila
	}
}
//Função para mostrar a fila
void listarValor(No **inicio){
	No *atual = (No*)malloc(sizeof(No));//variavel para percorrer a fila
	atual = *inicio;
	
	//loop para mostrar na tela
	while(atual != NULL){
		printf("\n%d", atual->valor);
		atual = atual->prox;
	}
}

//Função para remover o primeiro valor da fila
void removerValor(No **inicio){
	No *atual = (No*)malloc(sizeof(No));
	
	atual = *inicio;
	atual = atual->prox;
	*inicio = atual;
}