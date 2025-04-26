//Atividade 1041
//Coordenadas de um ponto

#include <stdio.h>

typedef struct{
	double x;
	double y;
} Ponto;

int main(){
	Ponto ponto;
	
	scanf("%lf %lf", &ponto.x, &ponto.y);
	
	if(ponto.x != 0 && ponto.y != 0){
		if(ponto.x > 0 && ponto.y > 0)
			printf("Q1\n");
		else if(ponto.x < 0 && ponto.y > 0)
			printf("Q2\n");
		else if(ponto.x < 0 && ponto.y < 0)
			printf("Q3\n");
		else
			printf("Q4\n");
	}
	
	else if(ponto.x != 0 && ponto.y == 0)
		printf("Eixo X\n");
	
	else if(ponto.x == 0 && ponto.y != 0)
		printf("Eixo Y\n");
	
	else
		printf("Origem\n");
	
	return 0;
}