#include <stdio.h>
//Calculo de fatorial

int main()
{	//Variáveis
	int number, c, fatorial;
	
	printf("Digite um número: \n");
	scanf("%d", &number);
	
	//Inicializando variáveis
	fatorial = number;
	c = number-1;
	
	//Loop para calcular o fatorial
	while(c >= 1){
		fatorial = fatorial * c;
		c--;
	}
	
	printf("O fatorial de %d é: %d\n",number, fatorial);
	return 0;
}
