//
// Created by Lucas Hemkemeier on 27/04/2026.
//
#include <stdio.h>
#include <stdlib.h>
// ler valores de matriz 3x3 e exibi-la
int main() {
    int matriz[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento[%d][%d]: \n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            fflush(stdin);
        }
    }

    printf("\nMatriz preenchida:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
