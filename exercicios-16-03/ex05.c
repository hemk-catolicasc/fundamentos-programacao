#include <stdio.h>
#include <stdlib.h>

int main() {

    int i1, i2;
    float f1;

    printf("Digite o primeiro número inteiro: ");
    scanf("%i", &i1);
    fflush(stdin);
    printf("Digite o segundo número inteiro: ");
    scanf("%i", &i2);
    fflush(stdin);
    printf("Digite um número real: ");
    scanf("%f", &f1);
    fflush(stdin);

    printf("Dobro do primeiro + Metade do segundo: %d\n", (i1 * 2) + (i2/2));
    printf("Triplo do primeiro + Terceiro: %f\n", (i1 * 3) + f1);
    printf("Terceiro elevado ao cubo: %.2f\n", f1 * 3);

    return 0;
}