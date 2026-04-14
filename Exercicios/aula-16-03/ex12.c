#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float salarioBruto, salarioLiquido, impostoRenda, inss, sindicato, descontos;
    
    printf("Digite seu salário bruto: \n");
    scanf("%f", &salarioBruto);
    fflush(stdin);
    
    impostoRenda = salarioBruto * 0.15;
    inss = salarioBruto * 0.11;
    sindicato = salarioBruto * 0.03;
    descontos = impostoRenda + inss + sindicato;
    salarioLiquido = salarioBruto - descontos;
    
    printf("Salário bruto:R$ %f \n", salarioBruto);
    printf("Imposto de renda:R$ %f \n", impostoRenda);
    printf("INSS:R$ %f \n", inss);
    printf("Sindicato:R$ %f \n", sindicato);
    printf("Salário liquido:R$ %f", salarioLiquido);
    
    return 0;
}
