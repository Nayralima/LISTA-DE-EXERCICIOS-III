#include <stdio.h>
#define TAMANHO 4 

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;
    int soma_diagonal = 0;
    
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("Digite o valor para a Posição [%d][%d]: ", i, j);
            if (scanf("%d", &matriz[i][j]) != 1) {
                printf("Erro");
                return 1;
            }
        }
    }

    printf("Elementos da diagonal principal:");
    
    for (i = 0; i < TAMANHO; i++) {
        
        soma_diagonal += matriz[i][i];
      
        printf("Elemento M[%d][%d]: %d\n", i, i, matriz[i][i]); 
    }
    printf("A soma dos valores da diagonal é: %d", soma_diagonal);
    
    return 0;
}
