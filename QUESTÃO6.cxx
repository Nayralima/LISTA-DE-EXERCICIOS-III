#include <stdio.h>
#define TAMANHO 10 

int main() {
    int vetor[TAMANHO];
    int i, j; 
    int e_repetido; 

    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o %dº número: ", i + 1);

        scanf("%d", &vetor[i]); 
    }
    
    printf("Números que não se repetem: "); 

    return 0;
}

