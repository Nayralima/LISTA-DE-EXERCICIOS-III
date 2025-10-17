#include <stdio.h>
#include <stdlib.h>

int main(){
    int palavra1, palavra2;
    
    printf ("digite a primeira palavra: ");
    scanf ("%s", &palavra1);
    printf ("digite a segunda palavra: ");
  scanf ("%s", &palavra2);
    
    if (palavra1==palavra2)
    printf ("as palavras são iguais");
    if (palavra1!=palavra2)
    printf ("as palavras são diferentes");
    
    return 0;
}