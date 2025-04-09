

/*
    CTRL + ;    COMENTÁRIOS
*/

// int main(void)
// {
//     printf("Sem args\n");
//     return 0;
// }

// int main(int argc, char *argv[])
// {
//     for(int i=0; i < argc; i++){
//         printf("Arg[%i] %s\n", i, argv[i]);
//     }
//     // printf("%i\n", argc);
//     return 0;
// }

// funções que executam funções
// float intToFloat(int n) {
//     return n;  
// }

// void halfConvert(int n){

//     float half = n * 0.5;
//     printf("Metade: %.2f\n", half);
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX_STR 50

typedef struct 
{
    char name[MAX_STR];
    float power;
    int lives;
    bool alive;     
} Player;

void imprimePlayer(Player *p){
    printf("==== GAME OVER =====\n");
    printf("%s\n", p->name);
    printf("%.4f\n", p->power);
    printf("%d\n", p->lives);
    printf("%i\n", p->alive);
    printf("====================\n");
}
int main() {
    Player p1 = {
        .name = "Brunão",
        .power = 1500.0,
        .lives = 5,
        .alive = true
    };
    imprimePlayer(&p1);
    // halfConvert(10);
    return 0;
}
