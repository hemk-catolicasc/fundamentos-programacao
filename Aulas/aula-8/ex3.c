//
// Created by Lucas Hemkemeier on 27/04/2026.
//
// receber vetor de 10 números e mostrar maior valor
#include <stdio.h>
#include <stdlib.h>

int main () {

    int num,maior,menor;

    for (int i = 1; i < 10; i++) {
        printf("Digite o %d° valor: \n", i + 1);
        scanf("%i", &num);
        fflush(stdin);
        if (i==1) {
            maior = num;
            menor = num;
        } else {
            if (num>maior) {
                maior = num;
            }
            if (num<menor) {
                menor = num;
            }
        }
    }
    printf("Menor numero - %i \n", menor);
    printf("Maior numero - %i \n", maior);
    printf("Diferenca - %i \n", maior-menor);

    return 0;
}