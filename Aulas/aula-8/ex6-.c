//
// Created by Lucas Hemkemeier on 27/04/2026.
//
#include <stdio.h>
#include <stdlib.h>

int main () {
    int n;
    float preco,soma,media;
    soma = 0;

    printf("Digite a quantidade de cds comprados: ");
    scanf("%d", &n);
    fflush(stdin);

    for (int i = 0; i < n; i++) {
        printf("digite o valor pago no %d° cd: ", i+1);
        scanf("%f", &preco);
        fflush(stdin);
        soma = soma + preco;
    }
    media = (float) soma / n;
    printf("Media dos CDs: %f", media);

    return 0;
}