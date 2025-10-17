#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    int i, j;
    int eh_palindromo = 1;

    printf("Digite uma palavra: ");

    if (fgets(palavra, sizeof(palavra), stdin) == NULL) {
        printf("Erro");
        return 1;
    }

    size_t len = strlen(palavra);
    if (len > 0 && palavra[len - 1] == '\n') {
        palavra[len - 1] = '\0';
        len--;
    }

    for (i = 0, j = len - 1; i < j; i++, j--) {
        while (i < j && isspace((unsigned char)palavra[i])) {
            i++;
        }
        while (i < j && isspace((unsigned char)palavra[j])) {
            j--;
        }

        if (i >= j) break;

        if (tolower((unsigned char)palavra[i]) != tolower((unsigned char)palavra[j])) {
            eh_palindromo = 0;
            break;
        }
    }

    if (eh_palindromo) {
        printf("É um palíndromo");
    } else {
        printf("Não é um palíndromo");
    }

    return 0;
}
