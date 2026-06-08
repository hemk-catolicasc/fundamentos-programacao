#include <stdio.h>
//
// Created by Lucas Hemkemeier on 27/04/2026.
//
// criar função para mostrar se valor é par ou impar
void verificar_numero(num) {
    if (num % 2 == 0) {
        printf("%d - Par", num);
    } else {
        printf("%d - Impar", num);
    }
}

int main () {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    verificar_numero(num);

    return 0;
}