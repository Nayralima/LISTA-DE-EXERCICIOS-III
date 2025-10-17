#include <stdio.h>
#define TAMANHO 5

int main() {
    int v1[TAMANHO];
    int v2[TAMANHO];
    int i;
   
    long int produto_escalar = 0; 
    for (i = 0; i < TAMANHO; i++) {
        printf("V1[%d]: ", i);
        if (scanf("%d", &v1[i]) != 1) {
            printf("Erro");
            return 1;
        }
    }
    printf("Leitura do Vetor V2 (Tamanho %d)", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        printf("V2[%d]: ", i);
        if (scanf("%d", &v2[i]) != 1) {
            printf("Erro");
            return 1;
        }
    }
    printf("Fórmula: ");
    
    for (i = 0; i < TAMANHO; i++) {
        printf("(%d * %d)", v1[i], v2[i]);
        if (i < TAMANHO - 1) {
            printf(" + ");
        }
        produto_escalar += (long int)v1[i] * v2[i];
    }
    
    printf("Resultado Final: %ld\n", produto_escalar);

    return 0;
}
