#include <stdio.h>
#include <stdlib.h>

int main() {

    float tempc, tempf;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &tempc);
    fflush(stdin);

    tempf = (tempc * 9 / 5) + 32;

    printf("Temperatura em graus Fahrenheit: %.2f F°", tempf);

    return 0;
}