/*Fatorial*/
/* Programa para encontrar o menor número de fatoriais cuja soma seja igual a N.*/

#include <stdio.h>
#include <math.h>

int main(){
	//Criando variáveis
	double N, Nf, c, resp;
	
	printf("Digite um número: ");
	scanf("%lf", &N);
	
	//Inicializando variáveis
	c = N; //Começamos com o maior número possível
	resp = 0; //Contador de quantos fatoriais foram usados
	
	//Loop pricipal: continua até N ser reduzido a zero (Para evitar loops eternos)
	while(N > 0){
		
		//Nf vai ser igual ao fatorial de C (Número atual)
		Nf = tgamma(c + 1);
		
		//Loop para verificar o maior número fatorial que seja próximo ao valor de N
		while(Nf > N && c > 0){
				c--;//Diminui o C até encontrar um valor válido
				Nf = tgamma(c + 1);
		}
		//// Subtrai esse fatorial de N (reduzindo N)
		N = N - Nf;
		//Incrementa a quantidade de fatoriais usados
		resp = resp + 1;
	}
	
	printf ("Resposta: %.0f\n", resp);
	return 0;
}
