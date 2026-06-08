#include <stdio.h>
#include <stdlib.h>

int main () {

    double num;

    printf("Digite um numero: ");
    scanf("%lf",&num);
    fflush(stdin);

    if (num %% 1.0 == 0) {
        printf("Numero inteiro.");
    } else {
        printf("Numero quebrado");
    }


    return 0;
}