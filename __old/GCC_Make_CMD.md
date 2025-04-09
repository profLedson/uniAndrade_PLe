
gcc main.c -o main 

### Parâmetros extras GCC
- gcc main.c -lm  -> Linka libs que o Compilador ignorou
- gcc -­c <arquivo>.c (Apenas compila, sem linkar)
- gcc -S main.c (Gera assembly do arquivo fonte main.c)






## Extras - no momento da compilação podemos:
- Passar diretivas extras
- incluir libs com -include <nomelib>
- definir MACROS <­D DEBUG>



- https://gcc.gnu.org/onlinedocs/gcc/Preprocessor-Options.html