#include <stdio.h>
#include <string.h>
#include <ctype.h> /* toupper - transforma os caracteres em maiúsculo
					  tolower - transforma os caracteres em minúsculo*/

int main()
{
	char string[16],
		 stringM[16],
		 string_m[16],
		 S_tring[16],
		 invert_string[16];
		 
	int c = 0;
	
	printf("\nDigite uma palavra: ");
	scanf("%s", &string);
	
	
	while(string[c] != '\0')
	{	
		//Todas as letras em maiúsculo
		stringM[c] = toupper(string[c]);
		
		//Todas as letras em minúsculo
		string_m[c] = tolower(string[c]);
		
		//Primeira letra maiúsculo
		if(string[c] == string[0])
			S_tring[0] = toupper(string[0]);
		else
			S_tring[c] = tolower(string[c]);
		
		//Caracteres invertidos
		if(islower(string[c]))
			invert_string[c] = toupper(string[c]);
		else
			invert_string[c] = tolower(string[c]);
			
		
		c++;
	}

	
	stringM[c] = '\0';
	string_m[c] = '\0';
	S_tring[c] = '\0';
	invert_string[c] = '\0';
	
	printf("\nPalavra: %s\n", string);
	printf("\nPalavra: %s\n", stringM);
	printf("\nPalavra: %s\n", string_m);
	printf("\nPalavra: %s\n", S_tring);
	printf("\nPalavra: %s\n", invert_string);
	
	return 0;
}