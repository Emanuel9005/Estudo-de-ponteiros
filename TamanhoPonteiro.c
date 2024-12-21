#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    char *p1;
    float *p2;

    printf("Tamanho ponteiro tipo int: %li\n", sizeof(p));
    printf("Tamanho ponteiro tipo char: %li\n", sizeof(p1));
    printf("Tamanho ponteiro tipo float: %li\n", sizeof(p2));

    return 0;
}

/*
    O ponteiro recebe um endereço de memória, por isso, não interessa o tipo da variável, ele vai ter sempre o mesmo tamanho 
    definido pela arquitetura do computador, no meu caso, 8 bytes. 
*/