# Agenda de Contatos

Trabalho final de Fundamentos de Programacao.

## Integrantes
- (preencher nome)

## Problema
Uma pequena empresa guardava os contatos em papeis e planilhas, o que
dificultava a consulta. O objetivo e criar um programa em C para cadastrar,
listar, consultar e excluir contatos.

## Solucao
O programa funciona no console com um menu. Os contatos ficam guardados em um
vetor de structs, cada um com nome e telefone. O menu se repete ate o usuario
escolher a opcao Sair.

## Funcoes
- `incluir()` - cadastra um novo contato no vetor.
- `listar()` - mostra todos os contatos.
- `consultar()` - procura um contato pelo nome.
- `excluir()` - remove um contato pelo nome.
- `main()` - mostra o menu e chama as funcoes (usa switch).

## Como compilar
```
gcc agenda.c -o agenda
./agenda
```

## Exemplo de execucao
```
=== AGENDA DE CONTATOS ===
1 - Incluir contato
2 - Listar contatos
3 - Consultar contato
4 - Excluir contato
5 - Sair
Opcao: 1
Nome: Maria Silva
Telefone: 1199998888
Contato incluido!
```
