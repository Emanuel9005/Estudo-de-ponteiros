#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x,tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);

    x = malloc(sizeof(int) * tam);

    if(x)
    {
    for(int i = 0; i < tam; i++)
        *(x + i) = i;

    for(int i = 0; i < tam; i ++)
       
        printf("Valor de x %d: %d\t\tendereco de memoria %d: %p\n",i,*(x+i),i,(x+i));

    }
    else
        printf("Nao foi possivel alocar memoria!\n");
    
    return 0;
}