#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float raio, area;

    printf("Digite o raio do circulo:");
    scanf("%f", &raio);
    fflush(stdin);

    area = 3.14 * raio * raio;

    printf("A area do circulo é: %.2f\n", area);

    return 0;
}