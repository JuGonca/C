#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CIDADES 5000

typedef struct {
    char nome[31];
    float populacao, area, PIB, IDH;
} Cidade;

int compararCidades(const void *a, const void *b) {
    Cidade *cidadeA = (Cidade *)a;
    Cidade *cidadeB = (Cidade *)b;

    if (cidadeA->IDH < cidadeB->IDH) {
        return 1;
    } else if (cidadeA->IDH > cidadeB->IDH) {
        return -1;
    }

    return strcmp(cidadeA->nome, cidadeB->nome);
}

int main() {
    Cidade cidades[MAX_CIDADES];
    int nCidades = 0;

    while (strcmp(cidades[nCidades].nome, "FIM") != 0) {
        printf("Informe o nome da cidade (ou 'FIM' para encerrar): ");
        scanf(" %30[^\n]", cidades[nCidades].nome);

        printf("Informe a população, área, PIB e IDH da cidade:\n");
        scanf("%f %f %f %f", &cidades[nCidades].populacao, 
                             &cidades[nCidades].area, 
                             &cidades[nCidades].PIB, 
                             &cidades[nCidades].IDH);

        nCidades++;
    }

    qsort(cidades, nCidades, sizeof(Cidade), compararCidades);

    int N;
    printf("Informe o número de cidades a serem beneficiadas: ");
    scanf("%d", &N);

    if (N > nCidades) {
        N = nCidades;
    }

    printf("\nCidades selecionadas:\n");
    for (int i = 0; i < N; i++) {
        printf("\nCidade: %s\n", cidades[i].nome);
        printf("População: %.2f\n", cidades[i].populacao);
        printf("Área: %.2f\n", cidades[i].area);
        printf("PIB: %.2f\n", cidades[i].PIB);
        printf("IDH: %.2f\n", cidades[i].IDH);
    }

    return 0;
}
