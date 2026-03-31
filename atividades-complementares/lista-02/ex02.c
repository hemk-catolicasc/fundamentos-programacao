#include <stdio.h>
#include <stdlib.h>

int main () {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    fflush(stdin);

    if (numero > 0) {
        printf("numero positivo");
    } else {
        printf("numero negativo");
    }

    return 0;
}