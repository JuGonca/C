#include <stdio.h>
#include <math.h>
//Primos Gêmeos

int main()
{
	//Variáveis usadas
	int number;
	
	printf("Digite um número entre 5 e 1000: ");
	scanf("%d", &number);
	
	if(number >= 5 && number <= 1000){
		
		for(int i=number; i>=5; i--){
			if(VerificaNumPrimo(i) && VerificaNumPrimo(i-2)){
				printf("%d %d", i, i-2);
				return 0;
			}
		}
		
	}
	else
		printf("Digite um número válido\n");
	
	
	//Verifica se o number é maior que 1
	
	return 0;
}

int VerificaNumPrimo(int number)
{
	double raiz;
	int c;
	c = 3;
	raiz = sqrt(number);
	
		//Verifica se a divisão por 2 é diferente de 0
		if(number == 2) 
			return 1;
		
		else if(number % 2 != 0){
			do{
				//Verifica se number é divisivel por c
				if(number % c ==0){
					return 0;
					//Não é primo
				}
				c = c + 2;
			}while(c <= raiz);//Repete o loop enquanto c por menor ou igual a raiz de number
			return 1; //É primo
		}
		else
			return 0; //Não é primo
}