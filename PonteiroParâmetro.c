#include <stdio.h>
#include <stdlib.h>

void imprimirValor(int num) // Perceba que ao passar o valor da variável para uma função na linguagem C, utilizamos o seu valor.
{
    printf("Na funcao imprimirValor: %d\n",num); 
    num = 50; // Alteramos o valor da variável "num" na função.
}

void imprimirValor2(int *num) // Agora, observe que essa função recebe um endereço de memória.
{
    printf("Na funcao imprimirValor2: %d\n", *num); // Aqui utilizamos o "*" para imprimirmos o valor da variável, pois agora ela é um ponteiro.
    *num = 50; // Agora alteramos o valor da variável apontada pelo ponteiro.
}
int main()
{
    int num = 10;
    
    imprimirValor(num); // Passamos o valor para a função imprimir valor.
    printf("No main: %d\n",num); // Perceba que mesmo alterando o valor da variável na função imprimirValor o resultado da impressão ainda e 10. 

    imprimirValor2(&num); // Utilizamos o & para passar o valor de memória da variável num para a função.
    printf("No main: %d\n",num); // Note que as alterações dentro da função main alteraram a variável num dentro do main, pois a função alterou o valor que estava atribuído ao endereço de memória de num.
    
    return 0;
}