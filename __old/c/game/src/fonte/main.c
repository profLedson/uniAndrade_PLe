#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[50];
    bool active;
    int power;
} Weapon;

typedef struct
{
    float health;
    Weapon weapon[50];
    char name[50];
} Player;

int main()
{
    Weapon armas[] = {
        {"🗡️", true, 500},
        {"🔫", false, 25},
        {"🛡️", false, 5000}
    };
    Player play1 = {
        .health = 85.7, 
        .weapon = {armas[0], armas[1]}, 
        .name = "James Bond"
    };

    Player play2 = {
                    .health = 78.7,
                    .weapon = {armas[0], armas[1], armas[2]},
                    .name = "Goku San"
    };

    void showInfo(Player * name)
    {
        int size = sizeof(armas) / sizeof(Weapon);

        printf("\n\t==========================\n\n");

        printf("\n\t| Nome: %s          ", name->name);
        printf("\n\t| Saúde: %.1f             ", name->health);
        printf("\n\t   |===== INVENTÁRIO =====");
        for (int i = 0; i < size; i++)
        {
            printf("\n\t| Arma %d:\t%s        ", i + 1, name->weapon[i].name);
        }
        printf("\n\t==========================\n\n");
    }

    showInfo(&play1);
    showInfo(&play2);

    return 0;
}
