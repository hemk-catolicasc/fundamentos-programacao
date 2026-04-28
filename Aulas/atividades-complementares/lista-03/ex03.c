#include <stdio.h>
#include <stdlib.h>

int main () {

    int v[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o %d - numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    return 0;
}