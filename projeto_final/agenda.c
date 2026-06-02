#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Contato {
    char nome[50];
    char telefone[20];
};

struct Contato agenda[MAX];
int total = 0;

void incluir() {
    if (total >= MAX) {
        printf("Agenda cheia!\n");
        return;
    }
    printf("Nome: ");
    scanf(" %[^\n]", agenda[total].nome);
    printf("Telefone: ");
    scanf(" %[^\n]", agenda[total].telefone);
    total++;
    printf("Contato incluido!\n");
}

void listar() {
    int i;
    if (total == 0) {
        printf("Nenhum contato cadastrado.\n");
        return;
    }
    for (i = 0; i < total; i++) {
        printf("%d - %s | %s\n", i + 1, agenda[i].nome, agenda[i].telefone);
    }
}

void consultar() {
    char nome[50];
    int i, achou = 0;
    printf("Digite o nome: ");
    scanf(" %[^\n]", nome);
    for (i = 0; i < total; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            printf("Nome: %s\nTelefone: %s\n", agenda[i].nome, agenda[i].telefone);
            achou = 1;
        }
    }
    if (achou == 0) {
        printf("Contato nao encontrado.\n");
    }
}

void excluir() {
    char nome[50];
    int i, pos = -1;
    printf("Digite o nome: ");
    scanf(" %[^\n]", nome);
    for (i = 0; i < total; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            pos = i;
        }
    }
    if (pos == -1) {
        printf("Contato nao encontrado.\n");
        return;
    }
    /* puxa os contatos seguintes uma posicao para tras */
    for (i = pos; i < total - 1; i++) {
        agenda[i] = agenda[i + 1];
    }
    total--;
    printf("Contato excluido!\n");
}

int main() {
    int opcao;
    do {
        printf("\n=== AGENDA DE CONTATOS ===\n");
        printf("1 - Incluir contato\n");
        printf("2 - Listar contatos\n");
        printf("3 - Consultar contato\n");
        printf("4 - Excluir contato\n");
        printf("5 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: incluir(); break;
            case 2: listar(); break;
            case 3: consultar(); break;
            case 4: excluir(); break;
            case 5: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 5);

    return 0;
}
