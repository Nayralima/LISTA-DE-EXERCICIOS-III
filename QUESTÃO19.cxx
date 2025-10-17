#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i;
    int contador_a = 0;

    printf("Digite uma palavra: ");

    if (fgets(palavra, sizeof(palavra), stdin) == NULL) {
        printf("Erro");
        return 1;
    }

    size_t len = strlen(palavra);
    if (len > 0 && palavra[len - 1] == '\n') {
        palavra[len - 1] = '\0';
    }

    for (i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == 'a') {
            contador_a++;
        }
    }
    printf("A letra 'a' aparece %d vezes na palavra.", contador_a);

    return 0;
}
