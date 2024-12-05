#include <stdio.h>

int QUOCIENTE(int x){
	return x / 4;
}

float TRUNCA(float x){
	return (int)x;
}

int RESTO(int x){
	int resto = x % 7;
	if(resto < 0)
		return resto + 7;
	else
		return resto;
}

typedef struct{
	int dia, mes, ano;
}Data;

int CalcDiaSemana(Data data){
	int D = data.dia;
	int M = data.mes;
	int A = data.ano % 100;
	int S = data.ano / 100;
	
	if(M == 1 || M == 2){
		M += 10;
		A -= 1;
	}
	else
		M-= 2;
	
	int diaSemana = RESTO(TRUNCA(2.6 * M - 0.1) + D + A + QUOCIENTE(A) + QUOCIENTE(S) - 2 * S);
	
	return diaSemana;
}

void DiaSemana(int diaSemana){
	const char *dias[] = {"domingo", "segunda-feira", "terça-feira", "quarta-feira", "quinta-feira", "sexta-feira", "sábado"};
    printf("%s\n", dias[diaSemana]);
}

int main(){
	Data data;
	
	data.dia = 1;
	data.mes = 1;
	data.ano = 1;
	
	while(data.dia != 0 && data.mes != 0 && data.ano != 0){
		printf("\n\nInforme o dia, mês e ano (0 0 0 para sair): ");
        scanf("%d %d %d", &data.dia, &data.mes, &data.ano);
		
		int diaSemana = CalcDiaSemana(data);
		
		printf("\nData: %02d/%02d/%04d - Dia da semana: ", data.dia, data.mes, data.ano);
        DiaSemana(diaSemana);
	}
	
	printf("Encerrando o programa.\n");
    return 0;
}
