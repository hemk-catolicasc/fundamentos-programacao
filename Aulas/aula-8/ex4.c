//
// Created by Lucas Hemkemeier on 27/04/2026.
//
//ler 10 números e contar pares e ímpares
#include <stdio.h>
#include <stdlib.h>

int main () {

    int v[10],contpar,contimpar;
    contpar = 0;
    contimpar = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %d° numero: \n", i + 1);
        scanf("%d", &v[i]);
        fflush(stdin);
    }
    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            contpar += 1;
        } else {
            contimpar += 1;
        }
    }
    printf("Contagem de pares: %d \n", contpar);
    printf("Contagem de impares: %d \n", contimpar);

    return 0;
}