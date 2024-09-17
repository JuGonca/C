#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* strcmp - Verifica se as strings são identicas, levando em consideração o tamanho da letra
   strcasecmp - Verifica se as strings são identicas, sem levar em consideração o tamanho da letra*/

int main(){
	char string1[21], string2[21];

	printf("\nDigite uma palavra: ");
	scanf("%s", &string1);
	
	printf("\nDigite outra palavra: ");
	scanf("%s", &string2);
	
	if(strcmp(string1, string2) == 0)
		printf("Strings são idênticas: case sensitive");
	else if(strcasecmp(string1, string2) == 0)
		printf("Strings são idênticas: case insensitive");
	else
		printf("Strings são diferentes");
	
	return 0;
}