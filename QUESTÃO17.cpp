#include <stdio.h>
#include <stdlib.h>

int main(){
int numero;

printf ("digite um número:");
scanf ("%d", &numero) ;

if (numero==0)
printf ("o número é zero");
if (numero>0)
printf ("o número é positivo");
if (numero<0)
printf ("o número é negativo");


    return 0;
}