#ifndef LIVRO_H
#define LIVRO_H


#define MAX_EMPRESTIMOS 3
#define MAX_LEN 50

typedef enum  {
    INDISPONIVEL,
    DISPONIVEL
} StatusLivro;

const char *getStatusLivro(StatusLivro status);


typedef struct
{
    char autor[MAX_LEN];
    char título[MAX_LEN];
    int num_pag[500];
    int total_emprestimos;
    StatusLivro status;

} Livro;



#endif
