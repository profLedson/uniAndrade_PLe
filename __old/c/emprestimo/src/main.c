#include <stdio.h>
#include <stdlib.h>

#include "../lib/livraria.h"
#include "../lib/livro.h"


Livro l3 = {
    .autor = "José Saramago",
    .título = "Morte e Monte o Monte",
    .total_emprestimos = 0,
    .num_pag = 149,
    .status = DISPONIVEL
};
int main(void)
{
    

    devolverLivro(&l3);
    devolverLivro(&l3);
    return 0;
}
