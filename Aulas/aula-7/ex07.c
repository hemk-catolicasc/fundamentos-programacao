//
// Created by Lucas Hemkemeier on 13/04/2026.
//
#include <stdio.h>
#include <stdlib.h>

int main () {

     int num;

     printf("Digite um numero: ");
     scanf("%d", &num);
     fflush(stdin);

     for (int i = 0; i <= 10; i++) {
          printf("%d * %d = %d\n",num, i, i * num);
     }

     return 0;
}