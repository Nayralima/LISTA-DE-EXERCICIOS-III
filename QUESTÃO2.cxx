#include <stdio.h>

int main() {
    int numero1, numero2, inicio, fim, i;

    printf("digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("digite o segundo número: ");
    scanf("%d", &numero2);
    
    if (numero1 < numero2) {
        inicio = numero1;
        fim = numero2;
    } else { 
        inicio = numero2;
        fim = numero1;
    }

    printf("Números inteiros entre %d e %d:", numero1, numero2);
    
    for (i = inicio + 1; i < fim; i++) {
        printf("%d", i);
    }
    

    if (fim - inicio <= 1) {
        printf("Não existe números inteiros", numero1, numero2);
    }
    
    return 0;
}


