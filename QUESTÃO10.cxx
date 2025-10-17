#include <stdio.h>
#define LINHAS 4 
#define COLUNAS 4 

int main() {
    int matriz[LINHAS][COLUNAS]; 
    int i, j;
    int maior_linha;

    printf("Leitura da Matriz %dx%d\n", LINHAS, COLUNAS); 

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Digite o valor para a Posição [%d][%d]: ", i, j);
            if (scanf("%d", &matriz[i][j]) != 1) {
                printf("Erro");
                return 1;
            }
        }
    }

    printf("Maior Valor em Cada Linha\n");

    for (i = 0; i < LINHAS; i++) {
        
        maior_linha = matriz[i][0];
        
        for (j = 1; j < COLUNAS; j++) {
            
            if (matriz[i][j] > maior_linha) {
                maior_linha = matriz[i][j];
            }
        }

        printf("Na Linha %d, o maior valor é: %d\n", i, maior_linha);
    }
    
    return 0;
}
