// Relação entre ponteiros e vetores
// Aritmética de ponteiro 

#include <stdio.h>

int main(){

    // vetores são ponteiros disfarçados
    // nome do vetor é um ptr do primeiro elemento 
    
    int idades[3] = {27, 29, 30};
    int *ptr = idades; // nem preciso do & nesses casos 
    
    printf("valor do primeiro elemento: %d\n", ptr[0]);
    printf("valor do primeiro elemento: %d\n", *ptr); 
    printf("valor do segundo elemento: %d\n", *(ptr+1));
    printf("valor do terceiro elemento: %d\n", *(ptr+2));
    printf("endereço do primeiro elemento: %p\n", ptr);
    printf("endereço do segundo elemento: %p\n", ptr+1);
    printf("endereço do terceiro elemento: %p\n", ptr+2);
    
    // é possível percorrer vetores usando ponteiros
    
    for (int i = 0; i < 3; i++){
        printf("endereço: %p, valor: %d\n", ptr+i, *(ptr+i));
    }
    
    return 0;
}