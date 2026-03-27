#include <stdio.h>
#include <stdlib.h>

int main() {
	char nome[55];
	char sexo;
	int idade;
	float altura;
	
	printf("Digite seu nome: \n");
	//gets(nome);
	//scanf("%s", nome);
	fgets(nome,50,stdin);
	fflush(stdin);
	printf("Digite seu sexo: \n");
	scanf("%c", &sexo);
	fflush(stdin);
	printf("Digite sua idade: \n");
	scanf("%i", &idade);
	fflush(stdin);
	printf("Digite sua altura: \n");
	scanf("%f", &altura);
	fflush(stdin);
	
	printf("Nome: %s \n", nome);
	printf("Sexo: %c \n", sexo);
	printf("idade: %i \n", idade);
	printf("altura: %.2f \n", altura);
	
	return 0;
	}