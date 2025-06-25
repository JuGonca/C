//Leia números inteiros do usuário e insira no início da lista
//Quando digitar um número negativo, parar a inserção
//Imprimir todos os números da lista

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int valor;
	struct No *prox;
} No;

int main(){
	No *inicio = NULL;
	int numero;
	
	printf("\nDigite um número (negativo para sair):\n");
	while(1){
		scanf("%d", &numero);
		if(numero < 0)
			break; //interrompe o loop se o valor for negativo
		
		//Alocando espaço na memórioa
		No *novo_no = (No *)malloc(sizeof(No));
		novo_no->valor = numero;
		novo_no->prox = inicio;//prox vai apontar para o que está guardado no inicio
		inicio = novo_no;//inicio vai guargar o novo nó criado
	}
	//Imprimindo valores na tela
		No *atual = inicio;
		while(atual != NULL){
			printf("\n%d", atual->valor);
			atual = atual->prox;
		}
}
