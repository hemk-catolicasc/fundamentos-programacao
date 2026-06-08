//
// Created by Lucas Hemkemeier on 27/04/2026.
//
#include <stdio.h>
#include <stdlib.h>
//ler 8 número inteiros e calcular a soma do vetor
int main() {

    int v[8],soma;
    soma = 0;

    for (int i = 0; i < 8; i++) {
        printf("digite o %d° número: \n", i+1);
        scanf("%d", &v[i]);
        fflush(stdin);
    }

    for (int i = 0; i < 10; i++) {
        soma += v[i];
    }
    printf("%d", soma);


    return 0;
}