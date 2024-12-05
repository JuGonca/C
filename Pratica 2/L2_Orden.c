#include <stdio.h>

#define MAX_VALORES 100000

int pSequencia(int vetor[], int n, int valor, int *comparacoes) {
    for (int i = 0; i < n; i++) {
        (*comparacoes)++;
        if (vetor[i] == valor) {
            return 1;
        }
    }
    return 0;
}


int pBinario(int vetor[], int n, int valor, int *comparacoes) {
    int esquerda = 0, direita = n - 1;
    
    while (esquerda <= direita) {
        (*comparacoes)++;
        int meio = (esquerda + direita) / 2;
        
        if (vetor[meio] == valor) {
            return 1;
        } else if (vetor[meio] < valor) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return 0;
}

void ordenarVetor(int vetor[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    int vetor1[MAX_VALORES], vetor2[MAX_VALORES];
    
    printf("Informe a quantidade de números: ");
    scanf("%d", &n);
    
    printf("Informe os números:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor1[i]);
        vetor2[i] = vetor1[i];
    }
    
    ordenarVetor(vetor2, n);
    
    int valor, comparacoesSeq, comparacoesBin;
	
	valor = 0;
    
    while (valor != -999) {
        comparacoesSeq = 0;
        comparacoesBin = 0;
        
        printf("Informe um valor a ser pesquisado (ou -999 para encerrar): ");
        scanf("%d", &valor);
        
        if (pSequencia(vetor1, n, valor, &comparacoesSeq)) {
            printf("Valor encontrado no primeiro vetor! Comparações sequenciais: %d\n", comparacoesSeq);
        } else {
            printf("Valor não encontrado no primeiro vetor! Comparações sequenciais: %d\n", comparacoesSeq);
        }
        
        if (pBinario(vetor2, n, valor, &comparacoesBin)) {
            printf("Valor encontrado no segundo vetor! Comparações binárias: %d\n", comparacoesBin);
        } else {
            printf("Valor não encontrado no segundo vetor! Comparações binárias: %d\n", comparacoesBin);
        }
    }
    
    printf("Programa encerrado.\n");
    return 0;
}
