#include <stdio.h>
#include <stdlib.h>

struct data { int dia, mes, ano;};

struct medicao { int idEstacao;
				 struct data dataMedicao;
				 int pluviometria;
				 float tempMaxima;
				};
				
int main(void)
{	struct medicao medicoes[3];
	struct data dataInfo;
	int cont, result, somaPluv, somaPluv2, somaTemp;
	int mediaTemp;
	
	cont = 0;
	result = 0;
	somaPluv = 0;
	somaPluv2 = 0;
	mediaTemp = 0;
	somaTemp = 0;
	
	//Adicionando Registros
	while (cont < 3)
	{	printf("Informe registro #%02d\n", cont + 1);
		printf("Estacao ....: ");
		scanf("%d", &medicoes[cont].idEstacao);
		printf("Data Medicao: ");
		scanf("%d/%d/%d", &medicoes[cont].dataMedicao.dia, 
						  &medicoes[cont].dataMedicao.mes,
						  &medicoes[cont].dataMedicao.ano);
		printf("Pluviometria: ");
		scanf("%d", &medicoes[cont].pluviometria);
		somaPluv = somaPluv + medicoes[cont].pluviometria;
		printf("Temp. Maxima: ");
		scanf("%f", &medicoes[cont].tempMaxima);
		somaTemp = somaTemp + medicoes[cont].tempMaxima;
		cont++;
		printf("\n");
	}
	mediaTemp = somaTemp/cont;
	system("clear");
	
	printf("Informe a data de interesse: ");
	scanf("%d/%d/%d", &dataInfo.dia, &dataInfo.mes, &dataInfo.ano);
	
	//Verificando registros
	cont = 0;
	printf("\n/....Registros...\n");
	while(cont<3){
		if(dataInfo.dia == medicoes[cont].dataMedicao.dia){
			if(dataInfo.mes == medicoes[cont].dataMedicao.mes){
				if(dataInfo.ano == medicoes[cont].dataMedicao.ano){
					printf("\n\nEstacao: %d", medicoes[cont].idEstacao);
					printf("\nData Medicao: %d/%d/%d", medicoes[cont].dataMedicao.dia,
													   medicoes[cont].dataMedicao.mes,
													   medicoes[cont].dataMedicao.ano);
					printf("\nPluviometria: %d", medicoes[cont].pluviometria);
					somaPluv2 = somaPluv2 + medicoes[cont].pluviometria;
					printf("\nTemp. Maxima: %.1f", medicoes[cont].tempMaxima);
					result++;
				}
			}
		}
		cont++;
	}
	
	if(result == 0)
		printf("Registro não encontrado");
	
	//Soma das pluviometrias
	printf("\nSoma todas Pluviometrias: %d", somaPluv);
	printf("\nSoma das Pluviometrias encontradas: %d", somaPluv2);
	
	//Media das pluviometrias
	printf("\n");
	printf("\nMedia de todas as temperaturas: %d", mediaTemp);
	
	
	return 0;
}
