#include <stdio.h>
#include "../lib/livro.h"
#include "../lib/persistencia.h"
#include "../lib/utils.h"


void salvarLivrosCSV() {
    FILE *arquivo = fopen(PATH_LIVROS, "w");
    if (!arquivo) {
        printf("Erro ao abrir o arquivo para salvar.\n");
        return; 
    }

    fprintf(arquivo, "ID,Titulo,Autor,Disponivel\n");
    for (int i = 0; i < totalLivros; i++) {
        fprintf(arquivo, "%d,%s,%s,%d\n",
                biblioteca[i].id,
                biblioteca[i].titulo,
                biblioteca[i].autor,
                biblioteca[i].disponivel);
    }

    fclose(arquivo);
    printf("Catálogo salvo em 'mock.livros.csv'.\n");
}

void carregarLivrosCSV() {
        FILE *arquivo = fopen(PATH_LIVROS, "r");
        if (!arquivo) {
            printf("Erro ao abrir o arquivo.\n");
            // printf("Posição inicial no arquivo: %ld\n", ftell(arquivo));
            return;
        }
    
        char linha[512];
        while (fgets(linha, sizeof(linha), arquivo)) {
            // Exibe cada linha do CSV
            printf("Linha lida: %s", linha);
    
            // Exemplo: Dividir os valores da linha (separados por vírgulas)
            char coluna1[50], coluna2[50];
            int coluna3;
            sscanf(linha, "%[^,],%[^,],%d", coluna1, coluna2, &coluna3);
            printf("Coluna 1: %s, Coluna 2: %s, Coluna 3: %d\n", coluna1, coluna2, coluna3);
        }
    
        fclose(arquivo);
        return;
    }
 