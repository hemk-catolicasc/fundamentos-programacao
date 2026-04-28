//
// Created by Lucas Hemkemeier on 27/04/2026.
//
//ler 5 números reais e calcular a média
#include <stdio.h>
#include <stdlib.h>

int main () {

    float v[5],media;
    media = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o %d° valor: ", i + 1);
        scanf("%f", &v[i]);
        fflush(stdin);
        media += v[i];
    }
    media /= 5;
    printf("A média é: %f", media);

    return 0;
}