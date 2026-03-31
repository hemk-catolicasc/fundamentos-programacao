#include <stdio.h>
#include <stdlib.h>


int main () {

    int ano;

    printf("Digite o ano:");
    scanf("%d", &ano);
    fflush(stdin);

    if ( (ano % 4 == 0 & ano % 100 != 0) || (ano % 400 == 0)) {
        printf("O ano e bissexto");
    } else {
        printf("O ano nao e bissexto");
    }

    return 0;
}