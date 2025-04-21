/*Distâmcoa entre dois pontos*/
#include <stdio.h>
#include <math.h>

//Função para calcular a distância entre dois pontos a partir das coordenadas x e y
double Distancia(double x1, double x2, double y1, double y2){
	double dist;
	
	//Fórmula
	dist = sqrt(pow((x2-x1),2) + pow((y2-y1),2)); 
	return dist;
}
//Struct que armazena um ponto com cardinalidades x e y
typedef struct{
	double x;
	double y;
}Ponto;

int main(){
	//Variáveis
	Ponto p1, p2;
	double distancia;
	
	//Entrada de Dados ponto 1
	printf("\nDigite um número para o x e y do ponto 1: ");
	scanf("%lf %lf", &p1.x, &p1.y);
	
	//Entrada de Dados ponto 2
	printf("\nDigite um número para o x e y do ponto 2: ");
	scanf("%lf %lf", &p2.x, &p2.y);
	
	//Chama a função para efeturar o calculo
	distancia = Distancia(p1.x, p2.x, p1.y, p2.y);
	
	printf("A distância dos pontos é: %.4lf", distancia);
	
	return 0;
	
}
