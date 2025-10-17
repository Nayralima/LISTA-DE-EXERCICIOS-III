#include <stdio.h>
#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int i;
    int maior_valor;
    int indice_maior = 0; 
    int menor_valor;
    int indice_menor = 0; 
    
    printf("Digite %d os números:", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        printf("Número na Posição %d: ", i);
        if (scanf("%d", &vetor[i]) != 1) {
            printf("Erro na leitura");
            return 1;
        }
    }
    
    maior_valor = vetor[0];
    menor_valor = vetor[0];
    
    for (i = 1; i < TAMANHO; i++) {
        
        if (vetor[i] > maior_valor) {
            maior_valor = vetor[i];  
            indice_maior = i;        
        }
        if (vetor[i] < menor_valor) {
            menor_valor = vetor[i];  
            indice_menor = i;        
        }
    }

    printf("Resultados");
    printf("O MAIOR valor (%d) está na POSIÇÃO: %d\n", maior_valor, indice_maior);
    printf("O MENOR valor (%d) está na POSIÇÃO: %d\n", menor_valor, indice_menor);

    return 0;
}
