#include <stdio.h>
#define TAMANHO 3

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;
    int soma_referencia;
    int soma_atual;
    int e_magico = 1;

    printf("Digite os valores para a Matriz 3x3:");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("Posição [%d][%d]: ", i, j);
            if (scanf("%d", &matriz[i][j]) != 1) {
                printf("Erro");
                return 1;
            }
        }
    }
    
    soma_referencia = 0;
    for (j = 0; j < TAMANHO; j++) {
        soma_referencia += matriz[0][j];
    }
    for (i = 1; i < TAMANHO; i++) {
        soma_atual = 0;
        for (j = 0; j < TAMANHO; j++) {
            soma_atual += matriz[i][j];
        }
        if (soma_atual != soma_referencia) {
            e_magico = 0;
            break;
        }
    }
    if (e_magico == 0) {
        printf("Não é um quadrado mágico.");
        return 0; 
    }

    for (j = 0; j < TAMANHO; j++) {
        soma_atual = 0;
        for (i = 0; i < TAMANHO; i++) {
            soma_atual += matriz[i][j];
        }
        
        if (soma_atual != soma_referencia) {
            e_magico = 0;
            break;
        }
    }

    if (e_magico == 0) {
        printf("Não é um quadrado mágico");
        return 0; 
    }

    soma_atual = 0;
    for (i = 0; i < TAMANHO; i++) {
        soma_atual += matriz[i][i];
    }
    
    if (soma_atual != soma_referencia) {
        e_magico = 0;
    }
    
    if (e_magico == 0) {
        printf("Não é um quadrado mágico");
        return 0; 
    }

    soma_atual = 0;
    for (i = 0; i < TAMANHO; i++) {
        soma_atual += matriz[i][TAMANHO - 1 - i];
    }
    
    if (soma_atual != soma_referencia) {
        e_magico = 0;
    }

    if (e_magico == 1) {
        printf("É um quadrado mágico");
    } else {
        printf("Não é um quadrado mágico");
    }
    
    return 0;
}
