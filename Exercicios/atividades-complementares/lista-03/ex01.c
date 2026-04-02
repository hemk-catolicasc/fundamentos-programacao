#include <stdio.h>
#include <stdlib.h>

int main () {

    int n1,n2;

    printf("Digite o primeiro numero:");
    scanf("%d",&n1);
    fflush(stdin);
    printf("Digite o segundo numero: ");
    scanf("%d",&n2);
    fflush(stdin);

    if (n1 < n2) {
        for (int i = n1 + 1; i < n2; i++) {
            printf("%d \n", i);
        }
    } else {
        for (int i = n2 + 1; i < n1; i++) {
            printf("%d \n", i);
        }
    }

    return 0;
}