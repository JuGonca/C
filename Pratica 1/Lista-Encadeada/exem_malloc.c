#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p = (int *)malloc(sizeof(int)); //aloca espaço para um inteiro
	
	if(p == NULL){
		printf("Erro ao alocar memória!\n");
		return 1;
	}
	
	*p = 42;
	printf("Valor %d\n", *p);
	
	free(p);
	return 0;
}
