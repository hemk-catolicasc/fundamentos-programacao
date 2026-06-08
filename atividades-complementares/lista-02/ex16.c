#include <stdio.h>
#include <stdlib.h>

int main () {

    int temp;

    printf("Qual temperatura o aluminio sera trabalhado? \n");
    scanf("%d",&temp);
    fflush(stdin);

    if (temp <= 500 || temp >= 1000) {
        printf("Temperatura invalida (Deve ser entre 501 - 999)");
    } else if (temp < 700) {
        printf("Aquecimento ligado em 100%%");
    } else if (temp < 735) {
        printf("Aquecimento ligado em 50%%");
    } else if (temp <= 780) {
        printf("Aquecimento desligado");
    } else {
        printf("Superaquecimento!!!!!!!!!");
    }

    return 0;
}