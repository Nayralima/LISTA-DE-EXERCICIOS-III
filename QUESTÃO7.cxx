#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 50 

int main() {
    int vetor_original[TAMANHO];
    int vetor_impares[TAMANHO]; 
    int i;
    int contador_impares = 0;
 srand(time(NULL));
    
    printf("Vetor com números aleátorios:", TAMANHO);
    printf("[ ");
    for (i = 0; i < TAMANHO; i++) {
        
        vetor_original[i] = rand() % 100; 
        
        printf("%d", vetor_original[i]);
        if (i < TAMANHO - 1) {
            printf(", ");
        }
    }
    printf(" ]");

    for (i = 0; i < TAMANHO; i++) {
        
        if (vetor_original[i] % 2 != 0) {
            
            vetor_impares[contador_impares] = vetor_original[i];
            
            contador_impares++;
        }
    }

    printf("Vetor com números ímpares:");
    printf("[ ");
    for (i = 0; i < contador_impares; i++) {
        printf("%d", vetor_impares[i]);
        if (i < contador_impares - 1) {
            printf(", ");
        }
    }

    return 0;
}
