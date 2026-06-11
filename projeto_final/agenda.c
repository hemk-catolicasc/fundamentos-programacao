#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define ARQUIVO "agenda.txt"

typedef struct {
    char nome[50];
    char telefone[20];
} Contato;
Contato agenda[MAX];
int total = 0;
void carregar() {
    FILE *arq = fopen(ARQUIVO, "r");
    if (arq == NULL) return;
    while (total < MAX && fscanf(arq, " %[^\n] %[^\n]", agenda[total].nome, agenda[total].telefone) == 2) {
        total++;
    }
    fclose(arq);
}

void salvar() {
    int i;
    FILE *arq = fopen(ARQUIVO, "w");
    if (arq == NULL) {
        printf("Erro ao salvar o arquivo.\n");
        return;
    }
    for (i = 0; i < total; i++) {
        fprintf(arq, "%s\n%s\n", agenda[i].nome, agenda[i].telefone);
    }
    fclose(arq);
    printf("Contatos salvos com sucesso!\n");
}

void ordenar() {
    int i, j;
    Contato temp;
    for (i = 0; i < total - 1; i++) {
        for (j = 0; j < total - i - 1; j++) {
            if (strcmp(agenda[j].nome, agenda[j + 1].nome) > 0) {
                temp = agenda[j];
                agenda[j] = agenda[j + 1];
                agenda[j + 1] = temp;
            }
        }
    }
}

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
    ordenar();
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
    char busca[50];
    int i, achou = 0;
    printf("Digite o nome (ou parte dele): ");
    scanf(" %[^\n]", busca);
    for (i = 0; i < total; i++) {
        if (strstr(agenda[i].nome, busca) != NULL) {
            printf("Nome: %s | Telefone: %s\n", agenda[i].nome, agenda[i].telefone);
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
            break;
        }
    }
    if (pos == -1) {
        printf("Contato nao encontrado.\n");
        return;
    }
    for (i = pos; i < total - 1; i++) {
        agenda[i] = agenda[i + 1];
    }
    total--;
    printf("Contato excluido!\n");
}

void alterar() {
    char nome[50];
    int i, pos = -1;
    printf("Digite o nome do contato a alterar: ");
    scanf(" %[^\n]", nome);
    for (i = 0; i < total; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        printf("Contato nao encontrado.\n");
        return;
    }
    printf("Novo nome (%s): ", agenda[pos].nome);
    scanf(" %[^\n]", agenda[pos].nome);
    printf("Novo telefone (%s): ", agenda[pos].telefone);
    scanf(" %[^\n]", agenda[pos].telefone);
    ordenar();
    printf("Contato alterado!\n");
}

int main() {
    int opcao;
    carregar();
    do {
        printf("\n=== AGENDA DE CONTATOS ===\n");
        printf("1 - Incluir contato\n");
        printf("2 - Listar contatos\n");
        printf("3 - Consultar contato\n");
        printf("4 - Excluir contato\n");
        printf("5 - Alterar contato\n");
        printf("6 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: incluir(); break;
            case 2: listar(); break;
            case 3: consultar(); break;
            case 4: excluir(); break;
            case 5: alterar(); break;
            case 6: salvar(); printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 6);
    return 0;
}
