#include <stdio.h>

int main() {
    int numero, inverso = 0, resto, original; 

    printf("digite um número: ");
    scanf ("%d", &numero);
    
    original = numero; 

    if (numero < 0) {
        numero = - numero;
    }
    
    while (numero != 0) { 
        resto = numero % 10;
        inverso = inverso * 10 + resto;
        numero = numero / 10;
    }
    if (original < 0) {
        inverso = - inverso;
    }

    printf ("o número invertido é: %d\n", inverso); 

    return 0;
}
