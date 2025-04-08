#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H

#include "../lib/livro.h"

#define MAX_LIVROS 100
extern Livro biblioteca[MAX_LIVROS];
extern int totalLivros;

void inicializarBiblioteca();
void adicionarLivro();
void listarLivros();
void procurarLivro();
void emprestarLivro();
void salvarLivrosCSV();
void carregarLivrosCSV();



#endif