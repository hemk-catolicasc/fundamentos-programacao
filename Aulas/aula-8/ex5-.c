//
// Created by Lucas Hemkemeier on 27/04/2026.
//
//calcular média de alunos por turma, informando turma e alunos, não podendo passar de 40.
#include <stdio.h>
#include <stdlib.h>

int main () {
    int numalunos,numturmas,soma;
    float media;
    soma = 0;

    printf("Digite o numero de turmas: ");
    scanf("%i",&numturmas);
    fflush(stdin);

    for (int i = 1; i <= numturmas; i++) {
        printf("Digite a quantidade de alunos: \n");
        scanf("%i",&numalunos);
        fflush(stdin);
        if (numalunos <= 40) {
            soma += numalunos;
        } else {
            printf("Erro: Numero de alunos invalido!\n");
            i--;
        }
    }

    media = (float)soma / numturmas;
    printf("Media de alunos por turma: %.2f\n", media);

    return 0;
}