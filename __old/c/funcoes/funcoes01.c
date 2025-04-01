
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// int main(void)
// {
//     /* code */
//     printf("Voiding...\n");
//     return 0;
// }

// int main(int argc)
// {
//     /* code */
//     printf("nArgs: %d\n", argc);
//     return 0;
// }

// int main(int argc, char* argv[])
// {
//     for (int i =0; i < argc; i++) {
//         printf("Arg [%d] %s\n", i, argv[i]);
//     }    
    
    
//     // printf("Arg [%d] %s\n", argc, argv[argc-1]);
//     return 0;
// }

//<Tipo_Retorno><identificador>(args)

// float intToFloat(int n1) {
//     return ( n1 * 0.5 );
// } 

// void printMetade(int n){
//     puts("\n==== MENU =======\n");
//         printf("\t%.1f\n", intToFloat(n)); 
//     puts("\n=================\n");
// };



// int main()
// {
//     printMetade(5);
//     printMetade(15);
//     printMetade(7);
   
   
//     return EXIT_SUCCESS;
// }

// typedef struct
// {
//     char name[50];
//     float power;
//     bool alive;    
// } Player;

// void printPlayer(Player p){

//         puts("\n==== MENU =======\n");
//             printf("\t%s\n", p.name); 
//             printf("\t%f\n",p.power); 
//             printf("\t%d\n", p.alive); 
//         puts("\n=================\n");    

// };


// int main()
// {

//    Player p1 = (Player)  { .name = "Ledson", .power = 1200.50,  .alive = true };
//    Player p2 = (Player)  { .name = "Maria", .power = 1200.50,  .alive = false };
//    Player p3 = (Player)  { .name = "Julia", .power = 1200.50,  .alive = true };
//     Player m = {"Ledson",1.5,true };
//     Player n = {"Dav",3.5,true };
//     Player o = {"Welton",2.5,true };
    
    
   
//     printPlayer(m);
//     printPlayer(n);
//     printPlayer(o);

   
//     return EXIT_SUCCESS;
// }


// typedef struct
// {
//     char name[50];
//     float power;
//     bool alive;    
// } Player;

// void printPlayer(Player p[], int size){
//     for(int i=0; i<size; i++) {
//         puts("\n==== MENU =======\n");
//             printf("\t%s\n", p[i].name); 
//             printf("\t%f\n",p[i].power); 
//             printf("\t%d\n", p[i].alive); 
//         puts("\n=================\n");
//     }

// };


// int main()
// {

//    Player players[] = {    
//     { .name = "Ledson", .power = 1200.50,  .alive = true },
//     { .name = "Lincoln", .power = 200.50, .alive = false}, 
//     { .name = "Manu", .power = 5200.50, .alive = false },
//     { .name = "Julia", .power = 3200.50, .alive = true },
//     { .name = "Dário", .power = 15200.50, .alive = false },
//     { .name = "Marucs", .power = 200.50, .alive = true }
//    };
   
//    int size = (sizeof(players) / sizeof(players[0]));
//    printPlayer( players, size );

   
//     return EXIT_SUCCESS;
// }