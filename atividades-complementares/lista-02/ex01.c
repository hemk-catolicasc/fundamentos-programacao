#include <stdio.h>
#include <stdlib.h>

int main () {

    int n1,n2;

    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);
    printf("Digite o segundo numero: ");
    scanf("%d",&n2);

    if (n1>n2) {
        printf("O primeiro numero eh maior: %d", n1);
    } else if (n1<n2) {
        printf("O segundo numero eh maior: %d", n2);
    } else {
        printf("Os dois numeros sao iguais");
    }

    return 0;
}