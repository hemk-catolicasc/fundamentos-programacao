#include <stdio.h>
#include <stdlib.h>

//Considere que a população do país A é de 80.000 habitantes, com crescimento anual de 3%, e que a população do país B é de 200.000 habitantes, com crescimento anual de 1,5%.
//Construa um programa que calcule e mostre o número de anos necessários para que a população do país A seja maior ou igual à população do país B, mantendo-se essas taxas de crescimento.

int main () {

    int anos = 0;
    double a,b,ca,cb;
    a = 80.000;
    b = 200.000;
    ca = 0.03;
    cb = 0.015;

    while (a < b) {
        a += (a * ca);
        b += (b * cb);
        anos ++;
        printf("Ano %d | Populacao A - %f | Populacao B - %f \n", anos, a, b);
    }

    printf("Levara %d anos", anos);

    return 0;
}