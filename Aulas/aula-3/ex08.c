#include <stdio.h>
#include <stdlib.h>

int main() {
    // exercício 04: Some duas variaveis
    //Quais são as variáveis?
    float n1, n2, resultado;

    //Entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    fflush(stdin);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    fflush(stdin);

    resultado = n1 + n2;

    //Saída de dados
    printf("Resultado da soma: %.2f", resultado);

    return 0;
}