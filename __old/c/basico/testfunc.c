#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}
int main(int argc, char const *argv[])
{
    /* code */
    
    int (*func_ptr)(int, int);
    func_ptr = soma;
    int resultado = func_ptr(5, 4);  // resultado recebe 7
    double n2 = 31.02;
    
    int j = n2;
    printf("%d\n", j);

    return 0;
}
