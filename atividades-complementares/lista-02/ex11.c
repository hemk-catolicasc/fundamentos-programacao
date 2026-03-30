#include <stdio.h>
#include <stdlib.h>

int main () {

    int n1, n2, escolha;

    n1 = 0;
    n2 = 0;
    escolha = 0;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);


    printf("---CALCULADORA--- \n");
    printf("[1] - Adicao \n");
    printf("[2] - Subtracao \n");
    printf("[3] - Multiplicacao \n");
    printf("[4] - Divisao \n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("%d", n1 + n2);
            break;
        case 2:
            printf("%d", n1 - n2);
            break;
        case 3:
            printf("%d", n1 * n2);
            break;
        case 4:
            printf("%d", n1 / n2);
            break;
        default:
            printf("Numero invalido");
            break;
    }

    return 0;
}