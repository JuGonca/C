#include <stdio.h>

int main()
{
	int number, c, fatorial;
	
	printf("Digite um número: \n");
	scanf("%d", &number);
	
	fatorial = number;
	c = number-1;
	while(c >= 1){
		fatorial = fatorial * c;
		c--;
	}
	
	printf("O fatorial de %d é: %d\n",number, fatorial);
	return 0;
}