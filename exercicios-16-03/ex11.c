#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int dias;
    float salarioBruto, salarioFinal;
    float imposto = 0.08;
    
    printf("Digite a quantidade de dias trabalhados: \n");
    scanf("%i", &dias);
    fflush(stdin);
    
    salarioBruto = dias * 25;
    salarioFinal = salarioBruto - (salarioBruto * imposto);
    
    printf("Seu salário final ficou %.2f reais", salarioFinal);

    return 0;
}
