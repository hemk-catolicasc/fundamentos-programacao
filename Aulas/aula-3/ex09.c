#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1, n2, n3, n4; 
    float media;

    printf("Digite a primeira nota: ");
    scanf("%d", &n1);
    fflush(stdin);
    printf("Digite a segunda nota: ");
    scanf("%d", &n2);
    fflush(stdin);
    printf("Digite a terceira nota: ");
    scanf("%d", &n3);
    fflush(stdin);
    printf("Digite a quarta nota: ");
    scanf("%d", &n4);
    fflush(stdin);

    media = (n1 + n2 + n3 + n4) / 4.0;

    printf("A media das notas é: %.2f", media);

    return 0;
}