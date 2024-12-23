/*Crie um programa que contenha um array de inteiros com 10 elementos. Imprima o elemento e o
endereço de cada posição do array.*/
#include <stdio.h>
#include <stdlib.h>

void imprimirArray(int vet[],int tam)
{
    for(int i = 0; i < tam; i++)
        printf("Valor de vet[%d]: %d\t Endereco de memoria de vet[%d]: %p\n",i,vet[i],i,&vet[i]);
}

int main()
{
    int vet[10] = {1,2,3,4,5,6,7,8,9,0};
    int tam = 10;

    imprimirArray(vet,tam);
    return 0;
}