#include <stdio.h>
#include <math.h>
//Primos Gêmeos

int main()
{
	//Variáveis usadas
	int number;
	
	printf("Digite um número entre 5 e 1000: ");
	scanf("%d", &number);
	
	//Verifica se o Número informa está dentro da condição
	if(number >= 5 && number <= 1000){
		
		 //Loop para encontrar os primeiros primos gêmeos menores ou iguais a "number"
		for(int i=number; i>=5; i--){
			//Chama a função para verificar se os dois números são primos gêmeos
			if(VerificaNumPrimo(i) && VerificaNumPrimo(i-2)){
				printf("%d %d", i, i-2);
				return 0;//São Primos Gêmeos
			}
		}
	}
	else
		printf("Digite um número válido\n");

	return 0;
}

//Função para verificar se um número é primo
int VerificaNumPrimo(int number)
{
	//Variáveis usadas
	double raiz;
	int c;
	c = 3;
	raiz = sqrt(number);
	
		//Verifica se a divisão por 2 é resulta em 0
		if(number == 2) 
			return 1;//É primo
		
		//Verifica se a divisão por 2 é diferente de 0
		else if(number % 2 != 0){
			do{
				//Verifica se number é divisivel por c
				if(number % c ==0){
					return 0;//Não é primo
				}
				c = c + 2;
			}while(c <= raiz);//Repete o loop enquanto c for menor ou igual a raiz de number
			return 1; //É primo
		}
		else
			return 0; //Não é primo
}
