#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char palavra[26];
	
	int ocorrencia[26] = {0};
	int c = 0, p;
	
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	
	while(palavra[c] != '\0'){
		if(isalpha(palavra[c])){
			p = tolower(palavra[c]) - 'a';
			ocorrencia[p]++;	
		}
		c++;
	}
		
	for(int i = 0; i < 26; i++)
	{
		if(ocorrencia[i] > 0)
			printf("Letra %c: %d\n", i+'a', ocorrencia[i]);
	}
	
	return 0;
}