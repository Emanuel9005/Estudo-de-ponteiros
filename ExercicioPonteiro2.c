/*Escreva um procedimento que troca os valores dos parâmetros recebidos. Sua assinatura deve
ser: void troca(float *a, float *b);*/

#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b)
{
    float c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    float a = 10, b = 20;

    troca(&a,&b);

    printf("Valor de A: %2.f\tValor de B: %2.f\n",a,b);
    return 0;
}