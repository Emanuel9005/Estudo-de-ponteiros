#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 100, *B, **C;

    B = &A;
    C = &B;

    printf("Endereco de A: %p\tValor de A: %d\n",&A, A);
    printf("Endereco de B: %p\tValor de B: %p\n",&B, B);
    printf("Valor apontado por B: %d\n",*B);
    printf("Endereco de C: %p\tValor de C: %p\n",&C, C);
    printf("Valor apontado por C: %d\n",**C);
    
    return 0;
}