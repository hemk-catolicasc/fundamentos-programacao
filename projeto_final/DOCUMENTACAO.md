# Agenda de Contatos

Trabalho final de Fundamentos de Programacao — N3.

## Integrantes

- (preencher nome)

## Problema

Uma pequena empresa guardava os contatos em papeis e planilhas, o que
dificultava a consulta e aumentava o risco de perda de informacoes. O objetivo
e criar um programa em C ANSI para cadastrar, listar, consultar, alterar e
excluir contatos de forma organizada.

## Solucao

O programa funciona no console com um menu numerado. Os contatos ficam
armazenados em um vetor de structs (usando `typedef struct`), cada um com nome
e telefone. O menu se repete ate o usuario escolher a opcao Sair. Ao iniciar,
o programa carrega automaticamente os contatos salvos no arquivo `agenda.txt`;
ao sair, salva todos os contatos nesse mesmo arquivo.

## Funcoes

- `carregar()` — le os contatos do arquivo `agenda.txt` ao iniciar o programa.
- `salvar()` — grava todos os contatos no arquivo `agenda.txt` ao encerrar.
- `incluir()` — cadastra um novo contato no vetor.
- `listar()` — exibe todos os contatos cadastrados numerados.
- `consultar()` — busca contatos pelo nome (pesquisa parcial com `strstr`).
- `excluir()` — remove um contato pelo nome exato, compactando o vetor.
- `alterar()` — localiza um contato pelo nome e permite editar nome e telefone.
- `main()` — carrega os dados, exibe o menu em loop e chama as funcoes via `switch`.

## Conteudos utilizados

- Variaveis e constantes (`#define MAX`, `int total`)
- Entrada e saida de dados (`scanf`, `printf`)
- Operadores aritmeticos (`total++`, `total--`, `i + 1`)
- Estrutura condicional (`if / else`)
- Estrutura de selecao (`switch`)
- Estruturas de repeticao (`for`, `do-while`)
- Vetores (vetor de structs `agenda[MAX]`)
- Funcoes (7 funcoes separadas)
- Strings via vetores de char (`char nome[50]`, `strcmp`, `strstr`)
- `typedef struct`
- Biblioteca `string.h` (`strcmp`, `strstr`)
- Gravacao e leitura em arquivo (`fopen`, `fscanf`, `fprintf`, `fclose`)
- Alteracao de contatos (funcao `alterar`)
- Pesquisa parcial pelo nome (`strstr`)

## Como compilar

```
gcc agenda.c -o agenda
```

Ou abrir `agenda.cbp` no Code::Blocks e pressionar F9.

## Exemplo de execucao

```
=== AGENDA DE CONTATOS ===
1 - Incluir contato
2 - Listar contatos
3 - Consultar contato
4 - Excluir contato
5 - Alterar contato
6 - Sair
Opcao: 1
Nome: Maria Silva
Telefone: 1199998888
Contato incluido!

=== AGENDA DE CONTATOS ===
Opcao: 3
Digite o nome (ou parte dele): Maria
Nome: Maria Silva | Telefone: 1199998888

=== AGENDA DE CONTATOS ===
Opcao: 6
Saindo...
```

## Capturas de tela

(adicionar screenshots do programa funcionando)
