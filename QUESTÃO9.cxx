#include <stdio.h>
#define TAMANHO 8 

int main() {
    int vetor[TAMANHO];
    int i, j, temp;

    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o %dº número: ", i + 1);
        if (scanf("%d", &vetor[i]) != 1) {
            printf("Erro");
            return 1;
        }
    }

    for (i = 0; i < TAMANHO - 1; i++) {
        for (j = 0; j < TAMANHO - 1 - i; j++) {
           
            if (vetor[j] < vetor[j + 1]) {
                
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    printf("ordem decrescente:");
    for (i = 0; i < TAMANHO; i++) {
        printf ("[");
        printf ("%d", vetor[i]);
        if (i < TAMANHO - 1) {
            printf(", ");
        }
    }

    return 0;
}
