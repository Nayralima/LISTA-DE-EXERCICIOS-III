#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    char c;
    int i, vogais = 0, consoantes = 0;

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    for (i = 0; palavra[i] != '\0'; i++) {
        c = tolower(palavra[i]);
        if (isalpha(c)) {  
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vogais++;
            else
                consoantes++;
        }
    }

    printf("Vogais da palavra: %d\n", vogais);
    printf("Consoantes da palavra: %d\n", consoantes);

    return 0;
}