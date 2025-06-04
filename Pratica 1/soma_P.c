#include <stdio.h>
//Somar valores usando ponteiros

int main(){
	int x, y, soma;
	int *p1, *p2;
	
	p1 = &x;
	p2 = &y;
	
	//Recebendo valores
	printf("\nDigite um valor para x: ");
	scanf("%d", p1); 
	printf("\nDigite um valor para y: ");
	scanf("%d", p2);
	
	//somando valores
	soma = x + y;
	
	printf("\nSoma: %d", soma);
}