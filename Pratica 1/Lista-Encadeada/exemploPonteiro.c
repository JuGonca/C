#include <stdio.h>

int main(){
	int x;
	int *p; //ponteiro para variável inteiro
	
	printf("\nDigite um número: ");
	scanf("%d", &x);
	
	p=&x;
	
	//Mostra valor de x antes da alteração
	printf("\nValor de x: %d", *p);//Acessa o valor da variavel x de forma indireta
	printf("\nEndereço de x: %p", p);
	
	//Digitando novo valor
	printf("\nDigite um novo valor pra x:");
	scanf("%d", p);//guarda o novo valor na variável x de forma indireta
	
	//Mostrando novo valor
	printf("\nValor de x: %d", x);//Forma direta
	printf("\nValor de x: %d", *p);//Forma indireta
	printf("\nEndereço de x: %p", p);
	
	return 0;
}
