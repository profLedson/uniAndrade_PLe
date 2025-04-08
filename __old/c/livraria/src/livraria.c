#include <stdio.h>
#include <string.h>
#include "../lib/livro.h"
#include "../lib/persistencia.h"

Livro biblioteca[MAX_LIVROS];
int totalLivros = 0;

void inicializarBiblioteca() {
    totalLivros = 0; // Inicializa o catálogo vazio
}

void adicionarLivro() {
    if (totalLivros >= MAX_LIVROS) {
        printf("Catálogo cheio!\n");
        return;
    }

    printf("Digite o título: ");
    scanf(" %[^\n]", biblioteca[totalLivros].titulo);
    printf("Digite o autor: ");
    scanf(" %[^\n]", biblioteca[totalLivros].autor);

    biblioteca[totalLivros].id = totalLivros + 1;
    biblioteca[totalLivros].disponivel = 1;
    totalLivros++;

    printf("Livro adicionado com sucesso!\n");
}

void listarLivros() {
    if (totalLivros == 0) {
        printf("Nenhum livro cadastrado.\n");
        return;
    }

    printf("\n--- Lista de Livros ---\n");
    for (int i = 0; i < totalLivros; i++) {
        printf("ID: %d | Título: %s | Autor: %s | Disponível: %s\n",
               biblioteca[i].id, biblioteca[i].titulo, biblioteca[i].autor,
               biblioteca[i].disponivel ? "Sim" : "Não");
    }
}

void procurarLivro() {
    char busca[100];
    printf("Digite o título para buscar: ");
    scanf(" %[^\n]", busca);

    for (int i = 0; i < totalLivros; i++) {
        if (strstr(biblioteca[i].titulo, busca)) {
            printf("Encontrado: ID %d | Título: %s | Autor: %s | Disponível: %s\n",
                   biblioteca[i].id, biblioteca[i].titulo, biblioteca[i].autor,
                   biblioteca[i].disponivel ? "Sim" : "Não");
            return;
        }
    }
    printf("Livro não encontrado.\n");
}

void emprestarLivro() {
    int id;
    printf("Digite o ID do livro para emprestar: ");
    scanf("%d", &id);

    if (id < 1 || id > totalLivros || !biblioteca[id - 1].disponivel) {
        printf("Livro inválido ou já emprestado.\n");
        return;
    }

    biblioteca[id - 1].disponivel = 0; // Marca como emprestado
    printf("Livro emprestado com sucesso!\n");
}