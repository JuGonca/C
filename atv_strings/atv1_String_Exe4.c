#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char NovaSenha[13], ConfirmaSenha[13];
	int c = 0,
		letraM = 0,
		letra_m = 0,
		num = 0;
		
	printf("\nInforme uma nova senha: ");
	scanf("%s", &NovaSenha);
	
	printf("\nConfirme a senha: ");
	scanf("%s", &ConfirmaSenha);
	
	
	//confirmando se as palavras são iguais
	if(strcmp(NovaSenha, ConfirmaSenha) == 0){
			while(NovaSenha[c] != '\0'){
				//Verifica caracteres maiúsculos
				if(isupper(NovaSenha[c]))
					letraM++;
				//Verifica caracteres minúsculos
				if(islower(NovaSenha[c]))
					letra_m++;
				if(isdigit(NovaSenha[c]))
					num++;
				c++;	
			}
			
			if(c > 5){
				if(letraM > 0){
					if(letra_m > 0){
						if(num > 0)
							printf("Nova senha Ok");
						else
							printf("Senha inválida. Necessário ter um número");
					}
					else
						printf("Senha inválida. Necessário ter uma letra minúscula");
				}
				else
					printf("Senha inválida. Necessário ter uma letra maiúscula");
			}
			else
				printf("Senha inválida. Necessário ter no mínimo 6 caracteres");
	}
	else
		printf("Senhas divergentes");
		
	
}