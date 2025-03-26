#include <stdio.h>
#include <stdlib.h>  // Para usar malloc

char* printLn(const char *ms)
{
    // Aloca memória suficiente para armazenar a string formatada
    char *result = (char*) malloc(100 * sizeof(char));  // Ajuste o tamanho conforme necessário
    
    if (result != NULL) {
        // Formata a string e armazena em 'result'
        sprintf(result, "Olá, %s.\n", ms);
    }
    
    return result;  // Retorna o ponteiro para a string formatada
}

int main()
{
    const char *nome = "Ledson";  // Exemplo de nome
    char *mensagem = printLn(nome);  // Chama a função que retorna a string formatada

    if (mensagem != NULL) {
        printf("%s", mensagem);  // Imprime a mensagem formatada
        free(mensagem);  // Libera a memória alocada após o uso
    } else {
        printf("Erro ao alocar memória.\n");
    }

    return 0;
}
