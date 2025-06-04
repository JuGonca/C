#include <stdio.h>
//Criar duas variáveis e trocar o valor delas usando ponteiros

int main(){
	int x, y, aux;
	int *p1, *p2;
	
	//Recebendo valores
	printf("\ninforme um valor para X: ");
	scanf("%d", &x);
	printf("\nInforme um valor para y: ");
	scanf("%d", &y);
	
	p1 = &x;
	p2 = &y;
	
	printf("\nX: %d", *p1);
	printf("\nY: %d", *p2);
	
	//Trocando valores
	aux = *p1;
	*p1 = *p2;
	*p2 = aux;
	
	printf("\nX: %d", *p2);
	printf("\nY: %d", *p1);
}