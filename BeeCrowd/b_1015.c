/*Distâmcoa entre dois pontos*/
#include <stdio.h>
#include <math.h>

double Distancia(double x1, double x2, double y1, double y2){
	double dist;
	
	dist = sqrt(pow((x2-x1),2) + pow((y2-y1),2)); 
	return dist;
}

typedef struct{
	double x;
	double y;
}Ponto;

int main(){
	Ponto p1, p2;
	double distancia;
	
	printf("\nDigite um número para o x e y do ponto 1: ");
	scanf("%lf %lf", &p1.x, &p1.y);
	
	printf("\nDigite um número para o x e y do ponto 2: ");
	scanf("%lf %lf", &p2.x, &p2.y);
	
	distancia = Distancia(p1.x, p2.x, p1.y, p2.y);
	
	printf("A distância dos pontos é: %.4lf", distancia);
	
	return 0;
	
}