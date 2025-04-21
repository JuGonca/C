/*1457*/
/*Óculos de Alexandria*/
#include <stdio.h>
#include <string.h> // Biblioteca para manipulação de strings
#include <stdlib.h> // Biblioteca para funções de conversão de string para número

int main(){
	//Variaveis
	char entrada[24];
	long long int n = 0, k = 0, kFatorial, t;
	
	scanf("%lld", &t);
	
	int c = 0;
	while(c < t){
	
		printf("Digite um número(EX: 10!!!): ");
		scanf("%s", entrada);
		
		//Loop para percorrer a entrada e encontrar o valor de n e valor de k
		for(int i = 0; entrada[i] != '\0'; i++){
			
			//verifica se cada digito informado está entre 0 e 9
			if(entrada[i] >= '0' && entrada[i] <= '9'){
				
				/*Fórmula para converter a parte numérica da string 
				(Leva em consideração suas representações na tabela ASCII)*/
				n = n * 10 + (entrada[i] - '0');
			}
			//Verifica o caracter não numérico
			else if (entrada[i] == '!'){
				k++;//incrementa k conforme a quandidade de !
			}
		}
		//Verifica se os valores estão dentro dos parâmetros esperados
		if (n < 1 || n > 100 || k < 1 || k > 20) {
			return 1;//Se o número não estiver dentro dos parâmetros
		}
		
		//inicializa kFatorial como n
		kFatorial = 1;
		
		//Loop para calcular o kFatorial
		for (long long int i = n; i > 0; i -= k) {
			kFatorial *= i;
		}
		printf("%lld\n", kFatorial);
		
		for(int j=0; j<24; j++){
			entrada[j]='\0';
		}
		n=0;
		k=0;
		c++;
	}
}
/*
	int c =0;
	do{
		kFatorial = kFatorial*(n-c*k);//Formula do calculo
		c++;//incremeta o c para multiplicar por k novamente
		
	}while(n - c*k >= 1);//Condição para o loop
	*/
