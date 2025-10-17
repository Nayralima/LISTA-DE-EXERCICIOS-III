#include <stdio.h>
#define TAMANHO 3 

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;
    int maior_soma = -2147483648; 
    int linha_maior_soma = 0;
    int soma_atual;
    
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("Digite o valor para a Posição [%d][%d]: ", i, j);
            if (scanf("%d", &matriz[i][j]) != 1) {
                printf("Erro");
                return 1;
            }
        }
    }
    for (i = 0; i < TAMANHO; i++) {
        
        soma_atual = 0; 
        
        for (j = 0; j < TAMANHO; j++) {
            soma_atual += matriz[i][j]; 
        }
        
        printf("Soma da Linha %d: %d\n", i, soma_atual);

        if (soma_atual > maior_soma) {
            maior_soma = soma_atual;       
            linha_maior_soma = i;          
        }
    }
    printf("A Linha com a maior soma é a Linha %d (Soma total: %d)", 
           linha_maior_soma, maior_soma);

    return 0;
}
