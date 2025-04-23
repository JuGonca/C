//1247
//Guarda Costeira

#include <stdio.h>
#include <math.h>

int main(){
	int D, VF, VG;
	
	printf("Digite a distâmcia entre os barcos e a velocidade de cada um.\n");
	printf("Cada valor deve estar da seguinte forma: D VF VG (Valores de 1 <= x <= 100): \n");
	
	while(scanf("%d %d %d", &D, &VF, &VG) == 3){
	
		double TLadrao = 12.0/VF;
		double TGuarda = sqrt(D*D + 144.0)/VG;
		
		if(TGuarda <= TLadrao)
			printf("S\n");
		else if(TGuarda > TLadrao)
			printf("N\n");
	}
	return 0;
}