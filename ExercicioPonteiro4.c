/*Considere a seguinte declaração: int A, *B, **C, ***D
Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quádruplo desse
valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C
o triplo e D o quádruplo. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,*B,**C,***D;

    B = &A;
    C = &B;
    D = &C;

    printf("Informe o valor de A: ");
    scanf("%d",&A);
    printf("Valor de dobrado usando B: %d\n",*B * 2);
    printf("Valor de triplicado usando C: %d\n",**C * 3);
    printf("Valor de quadruplicado usando D: %d\n",***D * 4);

    return 0;
}