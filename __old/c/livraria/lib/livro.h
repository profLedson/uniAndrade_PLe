#ifndef LIVROS_H
#define LIVROS_H


typedef struct {
    int id;
    char titulo[100];
    char autor[100];
    int disponivel;
} Livro;

#endif