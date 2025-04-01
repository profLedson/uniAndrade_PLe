
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "clear.h"


#define PARAMS 0



int divi (int a, int b) {
    if(b != 0) {
        return a / b;
    }
    printf("Impossível divisão por ZERO!");
    return -1;
}

void calcular(int a, int b, char op) {
   
    int res = 0;

    switch(op) {
        case '+': res =  a + b; break;            
        case '-' : res =  a - b; break;            
        case '*' : res =  a * b ;break;
        case '/' : res =  divi(a, b); break;
        default:  res =  -1; 
            
    }
    printf("%i\n", res);
}

int main()
{
    
    clscr();
      int m = 12;
      int n = 8;
     calcular(PARAMS, PARAMS,'+');
     calcular(m, n, '+');
     calcular(m, n, '*');
     calcular(m, -1, '/');
    
   
    return 0;
}