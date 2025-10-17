#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    int contador_digitos = 0;
    int temp_numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero == 0) {
        contador_digitos = 1;
    } else {
        temp_numero = abs(numero); 
        while (temp_numero > 0) {
            temp_numero = temp_numero / 10;
            contador_digitos++;
        }
    }

    printf("Dígitos: %d\n", contador_digitos);

    return 0;
}
