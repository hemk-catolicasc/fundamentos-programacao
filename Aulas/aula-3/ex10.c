#include <stdio.h>
#include <stdlib.h>

int main() {

    int horas;
    float valor, salario;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horas);
    fflush(stdin);
    printf("Digite o valor por hora: ");
    scanf("%f", &valor);
    fflush(stdin);

    salario = horas * valor;

    printf("O salario total é: %.2f", salario);

    return 0;
}