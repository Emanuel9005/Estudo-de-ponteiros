/*Escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços de duas
variáveis inteiras, menor e maior, salve nestas variáveis o menor e o maior valor do vetor.*/

#include <stdio.h>
#include <stdlib.h>

void maiorMenor(int vet[],int tam, int *maior, int *menor)
{
    *maior = vet[0];
    *menor = vet[0];

    for(int i=1;i<tam;i++)
    {
        if(*maior < vet[i])
            *maior = vet[i];
        if(*menor > vet[i])
            *menor = vet[i];
    }
}

int main()
{   
    int vet[10] = {13,10,31,41,15,61,17,82,95,22};
    int tam=10, maior,menor;

    maiorMenor(vet,tam,&maior,&menor);

    printf("Valor de maior.................: %d\n",maior);
    printf("Valor de menor.................: %d\n",menor);

    return 0;
}