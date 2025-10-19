#include <stdio.h>
#define TAMANHO 3

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;
    long long soma_referencia = 0; 
    long long soma_atual;
    int magico = 1;

    printf("Digite os numeros da matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("numeros [%d][%d]: ", i, j);
            if (scanf("%d", &matriz[i][j]) != 1) {
                printf("Erro");
                return 1;
            }
        }
    }

    for (j = 0; j < TAMANHO; j++) {
        soma_referencia += matriz[0][j];
    }

    for (i = 1; i < TAMANHO; i++) {
        soma_atual = 0;
        for (j = 0; j < TAMANHO; j++) {
            soma_atual += matriz[i][j];
        }
        if (soma_atual != soma_referencia) {
            magico = 0;
            break;
        }
    }

    if (magico == 0) {
        printf("A matriz nao e um quadrado magico");
        return 0;
    }
    
    for (j = 0; j < TAMANHO; j++) {
        soma_atual = 0;
        for (i = 0; i < TAMANHO; i++) {
            soma_atual += matriz[i][j];
        }
        if (soma_atual != soma_referencia) {
            magico = 0;
            break;
        }
    }

    if (magico == 0) {
        printf("A matriz nao e um quadrado magico");
        return 0;
    }

    soma_atual = 0;
    for (i = 0; i < TAMANHO; i++) {
        soma_atual += matriz[i][i];
    }
    if (soma_atual != soma_referencia) {
        magico = 0;
    }
    
    if (magico == 0) {
        printf("A matriz nao e um quadrado magico");
        return 0;
    }

    soma_atual = 0;
    for (i = 0; i < TAMANHO; i++) {
        soma_atual += matriz[i][TAMANHO - 1 - i];
    }
    if (soma_atual != soma_referencia) {
        magico = 0;
    }

    if (magico) {
        printf("A matriz e um quadrado magico! A soma eh: %lld\n", soma_referencia);
    } else {
        printf("A matriz nao eh um quadrado magico");
    }

    return 0;
}
