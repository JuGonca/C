#include <stdio.h>
#include <string.h>
#include <ctype.h>// funções:
					/*
					isalpha() - identifica se o conteúdo da variável é uma letra 
					isdigit() - identifica se o conteúdo da variável é um número
					isupper() - identifica se o conteúdo da variável é uma letra maiúscula
					islower() - identifica se o conteúdo da variável é uma letra minúscula
					*/

int main()
{
	char string[19];
	int c = 0, 
		LMaior = 0, 
		LMenor = 0,
		Num = 0,
		cEspecial = 0;
	
	
	printf("\nDigite uma palavra: ");
	scanf("%s", &string);
	
	
	while(string[c] != '\0')
	{
		if(isupper(string[c]))
			LMaior++;
		else if(islower(string[c]))
			LMenor++;
		else if(isdigit(string[c]))
			Num++;
		else
			cEspecial++;
		
		c++;
	}
	
	printf("\nA palavra %s possui %i caracteres", string, c );
	printf("\nA palavra %s possui %i letras maiúsculas", string, LMaior);
	printf("\nA palavra %s possui %i letras minúsculas", string, LMenor);
	printf("\nA palavra %s possui %i números", string, Num);
	printf("\nA palavra %s possui %i caracteres especiais", string, cEspecial);
	
	return 0;
}