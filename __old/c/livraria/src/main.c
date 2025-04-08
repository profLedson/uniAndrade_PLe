#include <stdio.h>
#include "../lib/menu_livraria.h"
#include "../lib/persistencia.h"
#include "../lib/livro.h"


int main() {
    
    carregarLivrosCSV();    // Carrega o catálogo de um arquivo CSV (se existir)
    exibirMenu();           // Exibição do menu principal
    salvarLivrosCSV();      // Salva o catálogo ao finalizar o programa
    return 0;
}
