#include <stdio.h>
#include "../lib/menu_livraria.h"
#include "../lib/livro.h"
#include "../lib/persistencia.h"
#include "../lib/clear.h"

void exibirMenu()
{
    int escolha;

    while (1)
    {
        printf("\n--- Menu Biblioteca ---\n");
        printf("1. Adicionar Livro\n");
        printf("2. Listar Livros\n");
        printf("3. Procurar Livro\n");
        printf("4. Empréstimo de Livro\n");
        printf("5. Salvar Catálogo\n");
        printf("6. Abrir Catálogo\n");
        printf("7. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        clear();

        switch (escolha)
        {
        case 1:
            adicionarLivro();
            break;
        case 2:
            listarLivros();
            break;
        case 3:
            procurarLivro();
            break;
        case 4:
            emprestarLivro();
            break;
        case 5:
            salvarLivrosCSV();
            break;
        case 6:
            carregarLivrosCSV();
            break;
        case 7:
            printf("Saindo do sistema...\n");
            return;
        default:
            printf("Opção inválida.\n");
        }
    }
}