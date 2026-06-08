#include <stdio.h>
#include <stdlib.h>

int main () {

    int n1,n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    fflush(stdin);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    fflush(stdin);

    if (n1==n2) {
        printf("Os numeros sao iguais.\n");
    } else if (n1<n2) {
        while (n1<n2) {
            if (n1 % 2 == 0) {
                printf("%d \n", n1);
            }
            n1++;
        }
    } else {
        while (n1>n2) {
            if (n1 % 2 == 0) {
                printf("%d \n", n1);
            }
            n1--;
        }
    }

    return 0;
}