#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#ifdef _WIN32
    #define CLEAR_COMMAND "cls"
#else
    #define CLEAR_COMMAND "clear"
#endif

void limparTela() {
    system(CLEAR_COMMAND);
}

double calcularFPS(clock_t inicio, clock_t fim) {
    return 1.0 / ((double)(fim - inicio) / CLOCKS_PER_SEC);
}

void imprimirTerminal(double fps) {
    printf("\n==============================\n");
    printf("      SIMULAÇÃO DE FPS        \n");
    printf("==============================\n");
    printf("\nFPS Atual: %.2f\n", fps);
    printf("Pressione Ctrl+C para sair.\n");
    printf("==============================\n");
    printf("\a"); // Beep sonoro (funciona no Windows)
}

void simularFPS() {
    clock_t inicio, fim;
    double fps;

    while (1) {
        inicio = clock();
        limparTela();
        fim = clock();
        fps = calcularFPS(inicio, fim);

        // Adiciona variação no FPS para simulação
        fps = fps + sin((double)clock() / CLOCKS_PER_SEC) * 10;

        imprimirTerminal(fps);

        // Simula o tempo entre frames (100ms)
        struct timespec intervalo = {0, 100 * 1000000L}; 
        nanosleep(&intervalo, NULL);
    }
}

int main() {
    printf("Iniciando a simulação de FPS...\n");
    simularFPS();
    return 0;
}