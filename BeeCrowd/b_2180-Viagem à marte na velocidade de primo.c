/*2180*/
/*Viagem à marte na velocidade de primo*/
#include <stdio.h>
#include <math.h>

//Função para verificar se um número é primo
int VerificaNumPrimo(int number)
{
	//Variáveis usadas
	double raiz;
	int c;
	c = 3;
	raiz = sqrt(number);
	
		//Verifica se o número é 2
		if(number == 2) 
			return 1;//É primo
		
		//Verifica se a divisão por 2 é diferente de 0
		else if(number % 2 != 0){
			do{
				//Verifica se number é divisivel por c
				if(number % c == 0){
					return 0;//Não é primo
				}
				c = c + 2;
			}while(c <= raiz);//Repete o loop enquanto c for menor ou igual a raiz de number
			return 1; //É primo
		}
		else
			return 0; //Não é primo
}

int main(){
	int peso;
	int numPrimos[10];
	int somaPrimos = 0, tempHoras, tempDias;
	
	printf("\nDigite um número entre 1.000 e 60.000: ");
	scanf("%d", &peso);
	
	int i = 0;
	//Encontrando números primos
	while(i < 10){
	//Verifica se o número é primo e adiciona ele ao vetor se for verdadeiro
		if(VerificaNumPrimo(peso) == 1){
			numPrimos[i] = peso;
			i++;
		}
		peso++;
	}
	//Calcula a velocidade do foguete
	for(int i = 0; i < 10; i++){
		somaPrimos += numPrimos[i];
	}
		
	//Calculo horas
	tempHoras = 60000000 / somaPrimos;
	//Calculo dias
	tempDias = tempHoras/24;
		
	printf("Velocidade: %d km/h\n", somaPrimos);
	printf("Tempo de viagem: %d h / %d d\n", tempHoras, tempDias);
	
	return 0;
	
}
