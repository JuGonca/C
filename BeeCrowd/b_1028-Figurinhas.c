//Atividade 1028
//Figurinhas

#include <stdio.h>

//Função MDC
int MDC(int a, int b){
	if(a%b == 0)
		return b;
	else
		return MDC(b, a%b);
}

int main(){
	int N, F1, F2, resp;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N ; i++){
		scanf("%d %d", &F1, &F2);
		
		resp = MDC(F1, F2);
		printf("%d\n", resp);
	}
	return 0;
}