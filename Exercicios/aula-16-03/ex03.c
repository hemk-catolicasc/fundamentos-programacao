#include <stdio.h>
#include <stdlib.h>

int main() {
 	
 	float tempc;
	float tempf;
 	
 	printf("Digite a temperatura em graus Fahrenheit: ");
 	scanf("%f", &tempf);
 	fflush(stdin);
 	
 	tempc = 5 * (tempf - 32) / 9; 
 	
 	printf("Temperatura em graus Celsius: %.2f", tempc);
 	printf("%f", tempc);
 	
    return 0;
}