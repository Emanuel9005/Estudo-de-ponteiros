#include <stdio.h>
int main()
{
    int num = 10; // Toda variável possui um endereço único na memória.
    int *p; // Uma variável do tipo ponteiro é uma variável que armazena um endereço de memória e somente o endereço de memória.
    // A variável do tipo ponteiro é definida utilizando o "*" como no exemplo acima mostra "int *p";

    p = &num; // Para passar um endereço de memória para o ponteiro, utiliza-se o &.
     
    printf("Valor de num: %d\n", num); // Aqui o programa vai imprimir o valor da variável que foi definida na parte de cima do código, no caso 10.
    printf("Endereço de num: %p\n", &num); // Nessa linha, ele imprime o endereço da memória da variável.
    printf("Valor de p: %p\n", p); // Aqui ele vai imprimir o valor de "p" no caso, como "p" é um ponteiro que está apontando para o endereço de memória de "num", ele vai imprimir o valor do endereço de memória de "num".
    printf("Endereço de p: %p\n", &p); // Nessa linha, o programa imprime o valor do endereço de memória de "p".
    printf("Valor apontato por p: %d\n", *p); // Aqui o programa exibe o valor apontado por "p", como "p" está apontado para "num", e "num" vale 10, ele imprime o valor 10.
    return 0;
}

/*
OBS 1: A ideia de ponteiro funciona para qualquer tipo de dado (char,int,float...).

OBS 2: O "*" é utilizado para criar o ponteiro e para obter o conteúdo apontado pelo ponteiro.
*/