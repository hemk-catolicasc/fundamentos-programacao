//
// Created by Lucas Hemkemeier on 27/04/2026.
//
// ler 10 números, armazenar em vetor e exibir todos
#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: \n", i + 1);
        scanf("%d", &v[i]);
        fflush(stdin);
    }
    for (int i = 0; i < 10; i++) {
        printf("%d \n",v[i]);
    }


    return 0;
}