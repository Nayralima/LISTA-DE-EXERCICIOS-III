#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ler_numeros(int array[], int N) {
    printf("Digite os %d numeros inteiros:", N);
    for (int i = 0; i < N; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

void gerar_numeros_aleatorios(int array[], int N) {
    srand(time(NULL));

    int LIMITE = 100;
    
    printf("Gerando %d numeros aleatorios entre 0 e %d...", N, LIMITE);
    for (int i = 0; i < N; i++) {
        array[i] = rand() % LIMITE; 
    }
}

void processar_array(const int array[], int N) {
    long int soma_pares = 0;
    long int soma_impares = 0;

    printf("Array de numeros:");
    printf("[");
    for (int i = 0; i < N; i++) {
        printf("%d", array[i]);
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("]");

    for (int i = 0; i < N; i++) {
        if (array[i] % 2 == 0) {
            soma_pares += array[i];
        } else {
            soma_impares += array[i];
        }
    }

    printf("Soma dos numeros pares: %ld", soma_pares);
    printf("Soma dos numeros impares: %ld", soma_impares);
}

int main() {
    int N;
    int opcao;

    printf("Informe a quantidade de numeros (N): ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Quantidade de numeros invalida.\n");
        return 1;
    }

    int numeros[N];

    printf("Como deseja preencher os %d numeros?", N);
    printf("1 - Informar pelo usuario");
    printf("2 - Gerar aleatoriamente");
    printf("Escolha a opcao (1 ou 2): ");
    if (scanf("%d", &opcao) != 1 || (opcao != 1 && opcao != 2)) {
        printf("Erro");
        return 1;
    }

    if (opcao == 1) {
        ler_numeros(numeros, N);
    } else {
        gerar_numeros_aleatorios(numeros, N);
    }
    
    processar_array(numeros, N);

    return 0;
}
