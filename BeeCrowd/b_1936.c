/*Fatorial*/
#include <stdio.h>
#include <math.h>

int main(){
	double N, Nf, c, resp;
	
	printf("Digite um número: ");
	scanf("%lf", &N);
	
	c = N;
	resp = 0;
	
	while(N > 0){
		
		Nf = tgamma(c + 1);
		
		while(Nf > N && c > 0){
				c--;
				Nf = tgamma(c + 1);
			
		}
		N = N - Nf;
		resp = resp + 1;
	}
	
	
	
	printf ("Resposta: %.0f\n", resp);
	return 0;
}