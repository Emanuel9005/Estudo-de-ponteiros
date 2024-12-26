#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet,tam;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);

    vet = malloc(sizeof(int) * tam);

    if(vet)
    {
        for(int i=0;i<tam;i++)
        *(vet+i) = i * 2;
    
        printf("Valores de vet\n");

        for(int i=0;i<tam;i++)
        {
            printf("Valor: %d \tEndereco de memoria: %p\n",*(vet+i),(vet+i));
        }
        
        printf("\nDigite o novo tamanho do vetor: ");
        scanf("%d",&tam);

        vet = realloc(vet,tam);
           
        for(int i=0;i<tam;i++)
        {
            printf("Valor: %d \tEndereco de memoria: %p\n",*(vet+i),(vet+i));
        }

        free(vet); 
    }
    else
        printf("Falha ao alocar memoria!\n");
    
    return 0;
}