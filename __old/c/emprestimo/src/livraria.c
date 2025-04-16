
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/livro.h"
#include "../lib/livraria.h"

Livro l1 = {
    .autor = "José Saramago",
    .título = "Morte e Monte o Monte",
    .num_pag = 149,
    .total_emprestimos = MAX_EMPRESTIMOS,
    .status = DISPONIVEL
};

Livro l2 = {
    .autor = "Maria Carmo",
    .título = "Inocencia",
    .num_pag = 129,
    .total_emprestimos = MAX_EMPRESTIMOS,
    .status = DISPONIVEL
};

const char *getStatusLivro(StatusLivro status) {
    switch (status) {
        case DISPONIVEL:
            return "Disponível";
        case INDISPONIVEL:
            return "Emprestado";
        default:
            return "Desconhecido";
    }
}

void emprestarLivro(Livro *l) {
    if (l->total_emprestimos >= MAX_EMPRESTIMOS) {
        printf("Erro, livro indisponível!\n");
        l->status = INDISPONIVEL; // o livro está indisponível
    } else {
        l->total_emprestimos += 1; // Incrementa o número de empréstimos
        l->status = INDISPONIVEL;
        printf("=== LIVRO EMPRESTADO COM SUCESSO ===\n");
        printf("=== INFO LIVRO ===\n");
        printf("Titulo:%s\n", l->título);
        printf("Autor:%s\n", l->autor);
        printf("Páginas:%d\n", *l->num_pag);
        printf("Status:%s\n", getStatusLivro(l->status));
        printf("=== EMPRÉSTIMOS RESTANTES === [%d]\n", MAX_EMPRESTIMOS - l->total_emprestimos);
        printf("=============================\n");
    }
}



void devolverLivro(Livro *l) {
    if(l->status == DISPONIVEL && l->total_emprestimos >= MAX_EMPRESTIMOS) {
        printf("Erro,Impossível devolver!\n");
        return;
    }
        l->total_emprestimos -= 1;
        l->status = DISPONIVEL;

        printf("=== LIVRO DEVOLVIDO COM SUCESSO ===\n");
        printf("=== INFO LIVRO ===\n");
        printf("Titulo:%s\n", l->título);
        printf("Autor:%s\n", l->autor);
        printf("Páginas:%d\n", *l->num_pag);
        printf("Status:%s\n", getStatusLivro(l->status));
            
        printf("=== EMPRÉSTIMOS RESTANTES === [%d]\n", l->total_emprestimos);
        printf("=============================\n");
    


};