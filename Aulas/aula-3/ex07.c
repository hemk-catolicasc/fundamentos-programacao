#include <stdio.h>
#include <stdlib.h>

int main() {

    float metros, centimetros;

    printf("Digite a medida em metros: ");
    scanf("%f", &metros);
    fflush(stdin);

    centimetros = metros * 100;

    printf("A medida em centimetros é: %.2f cm\n", centimetros);

    return 0;
}