// Dia 1: ponteiros

// ponteiro é uma variável que guarda endereços

#include <stdio.h>

int main() {
    
    int x = 42;
    
    // usa-se *[nome] para criar um ponteiro
    // usa-se & para passar o endereço
    
    int *ptr = &x;
    
    printf("valor de x: %d\n", x);
    printf("endereço de x: %p\n", &x);
    printf("valor apontado: %d\n", *ptr);
    printf("endereço armazenado: %p\n", ptr);
    
    // usa-se *ptr = [novo valor] para modificar o valor apontado
    
    *ptr = 100;
    
    printf("novo valor apontado: %d\n", *ptr);
    
    // advanced: todo ponteiro tem seu proprio endereco 
    // posso passar esse endereco para outro ponteiro
    // usa-se duas ** nesses casos
    
    int **petralha = &ptr;
    
    printf("endereco armazenado (endereco do ptr): %p\n", petralha);
    printf("endereco armazenado em ptr: %p\n", *petralha);
    printf("valor apontado por ptr: %d\n", **petralha);

    return 0;
}