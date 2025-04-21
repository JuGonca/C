//Atividade - Fatorial de novo!
#include <stdio.h>
#include <string.h>//manipula string
#include <stdlib.h>//Converte string para número
#include <math.h>

int main(){
		char A[5];
		int k;
		int n[5];
		int resp;
		
		
		while(1){
			printf("\nDigite um número de no máximo 5 dígitos: ");
			scanf("%s", A);
			
			if(strcmp(A, "0") == 0){
				break;
			}
			
			k = 0;
			//Conta quantos termos tem na string
			for(int i = 0; A[i] != '\0'; i++){
				n[i] = A[i] - '0';//Converte o número de ASCII para inteiro
				k++;
			}
			
			int c = 0;
			resp = 0;
			//Loop para converter o número ACM em decimal
			while(k != 0){
				resp = resp + n[c]*tgamma(k + 1);
				k--;
				c++;
				
			}
			
			printf("\nResposta do exercício: %d\n", resp);
		}
		return 0;
}
