#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int num[3];
    
    for (int i = 0; i < 3; i++) {
        printf("Digite o %d° número: \n", i+1);
        scanf("%d", &num[i]);
        fflush(stdin);
    }
    printf("\n Sequência original: ");
    for (int i = 0; i < 3; i++) {
        printf(" [%d]", num[i]);
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (num[j] > num[j + 1]) { //Caso [i] seja maior que [i+1] ele troca os dois de lugar
                int aux = num[j];
                num[j] = num[j + 1];
                num[j + 1] = aux;
            }
        }
    }
    printf("\n Sequência ordenada: ");
    for (int i = 0; i < 3; i++) {
        printf(" [%d]", num[i]);
    }

    return 0;
}
