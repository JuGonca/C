#include <stdio.h>

struct data { int dia, mes, ano;};

struct medicao { int idEstacao;
				 struct data dataMedicao;
				 int pluviometria;
				 float tempMaxima;
				};
				
int main(void)
{	struct medicao medicoes[10];
	struct data dataInfo;
	int cont, result;
	
	cont = 0;
	result = 0;
	while (cont < 10)
	{	printf("Informe registro #%02d\n", cont + 1);
		printf("Estacao ....: ");
		scanf("%d", &medicoes[cont].idEstacao);
		printf("Data Medicao: ");
		scanf("%d/%d/%d", &medicoes[cont].dataMedicao.dia, 
						  &medicoes[cont].dataMedicao.mes,
						  &medicoes[cont].dataMedicao.ano);
		printf("Pluviometria: ");
		scanf("%d", &medicoes[cont].pluviometria);
		printf("Temp. Maxima: ");
		scanf("%f", &medicoes[cont].tempMaxima);
		
		cont++;
		printf("\n");
	}
	
	printf("\n\n\n");
	printf("Informe a data de interesse: ");
	scanf("%d/%d/%d", &dataInfo.dia, &dataInfo.mes, &dataInfo.ano);
	
	cont = 0;
	while(cont<10){
		if(dataInfo.dia == medicoes[cont].dataMedicao.dia){
			if(dataInfo.mes == medicoes[cont].dataMedicao.mes){
				if(dataInfo.ano == medicoes[cont].dataMedicao.ano){
					printf("\n/....Registros...\n");
					printf("\nEstacao: %d", medicoes[cont]idEstacao);
					printf("\nData Medicao: %d/%d/%d", medicoes[cont].dataMedicao.dia,
													   medicoes[cont].dataMedicao.mes,
													   medicoes[cont].dataMedicao.ano);
					printf("\nPluviometria: %d", medicoes[cont].pluviometria);
					printf("\nTemp. Maxima: %f", medicoes[cont].tempMaxima);
					result = 1;
					break;
				}else cont++;
			}else cont++;	
		}else cont++;	
	}
	
	if(result == 0)
		printf("Registro não encontrado")
	
	return 0;
}
