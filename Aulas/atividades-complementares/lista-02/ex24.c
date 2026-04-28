#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, c, d, u;
    c = 0;
    d = 0;
    u = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);
    fflush(stdin);

    if (num > 1000 || num <= 0) {
        printf("Numero invalido, digite um numero entre 1 - 1000");
    } else {
        int numfinal = num;
        c = num / 100;
        num = num - c * 100;
        d = num / 10;
        num = num - d * 10;
        u = num / 1;

        // numero inicial
        printf("%d - ", numfinal);

        // centenas
        if (c != 0) {
            if (c == 1) {
                printf("%d centena", c);
            } else {
                printf("%d centenas", c);
            }
        }

        // primeiro separador
        if (c == 0 || d == 0 ) {
            printf("");
        } else if (u != 0) {
            printf(", ");
        } else {
            printf(" e ");
        }

        // dezenas
        if (d != 0) {
            if (d == 1) {
                printf("%d dezena", d);
            } else {
                printf("%d dezenas", d);
            }
        }

        // segundo separador
        if ((c != 0 || d != 0) && u != 0) {
            printf(" e ");
        } else {
            printf("");
        }

        // unidades
        if (u != 0) {
            if (u == 1) {
                printf("%d unidade", u);
            } else {
                printf("%d unidades", u);
            }
        }
    }

    return 0;
}