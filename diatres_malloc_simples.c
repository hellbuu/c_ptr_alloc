#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// a ideia é pedir memória ao sistema
// malloc cria um ptr genérico que aponta para o bloco 
// free libera
// sizeof 

int main(){
    
    int *ptr = malloc(sizeof(int));
    
    if (ptr == NULL){
        printf("Falha de alocação\n");
        return 1;
    }
    
    *ptr = 99;
    printf("valor apontado: %.2f\n", *ptr);
    printf("valor apontado: %p\n", ptr);
    free(ptr);
}