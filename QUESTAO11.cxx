#include <stdio.h>
#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int i, j;
    int contador;
    
    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o %dº número: ", i + 1);
        if (scanf("%d", &vetor[i]) != 1) {
            printf("Erro");
            return 1;
        }
    }
    printf("Frequência de cada número");

    for (i = 0; i < TAMANHO; i++) {
        
        contador = 0;
        
        int foi_contado = 0;
        for (j = 0; j < i; j++) {
            if (vetor[i] == vetor[j]) {
                foi_contado = 1;
                break; 
            }
        }
        if (foi_contado) {
            continue;
        }
        
        for (j = i; j < TAMANHO; j++) {
            if (vetor[i] == vetor[j]) {
                contador++; 
            }
        }
        printf("O número %d apareceu %d vez(es)", vetor[i], contador);
    }

    return 0;
}
