//JÚLIA GONÇALVES DA ROCHA
#include <stdio.h>
#include <math.h>

float IAC(float quadril, float altura){
	return quadril/(altura*sqrt(altura)) - 18;
}

int main(){
	char sexo;
	float vQuadril, vAltura, vIAC;
	
	printf("\n== Indice de Adiposidade Corporal (IAC)==\n");
	
	//Recebendo valores
	printf("\nInforme seu sexo(M/F): ");
	scanf("%c", &sexo);
	printf("\nInforme a circunferencia do quadril(cm): ");
	scanf("%f", &vQuadril);
	printf("\nInforme a altura: ");
	scanf("%f", &vAltura);
	
	//Calculo
	vIAC = IAC(vQuadril, vAltura);
	
	//Homem
	if(sexo == 'M' || sexo == 'm'){
		//Excesso de gordura
		if(vIAC > 25)
			printf("Resultado: Excesso de gordura");
		//Moderada
		else if(vIAC >= 19 && vIAC <=25)
			printf("Resultado: Gordura moderada");
		//Ideal
		else if(vIAC >= 15 && vIAC < 19)
			printf("Resultado: Gordura ideal");
		//Baixa
		else if(vIAC >= 11 && vIAC < 15)
			printf("Resultado: Gordura baixa");
		//Excepcionalmente baixa
		else if(vIAC >= 6 && vIAC < 11)
			printf("Resultado: Gordura Excepcionalmente baixa");
		
		else
			printf("Valor inválido");
	}
	
	//Mulher
	else if(sexo == 'F' || sexo == 'f'){
		//Excesso de gordura
		if(vIAC > 30)
			printf("Resultado: Excesso de gordura");
		//Moderada
		else if(vIAC >= 26 && vIAC <=30)
			printf("Resultado: Gordura moderada");
		//Ideal
		else if(vIAC >= 20 && vIAC < 26)
			printf("Resultado: Gordura ideal");
		//Baixa
		else if(vIAC >= 16 && vIAC < 20)
			printf("Resultado: Gordura baixa");
		//Excepcionalmente baixa
		else if(vIAC >= 10 && vIAC < 16)
			printf("Resultado: Gordura Excepcionalmente baixa");
		
		else
			printf("Valor inválido");
	}
	
	else
		printf("Valor inválido");
	
	return 0;
}