// ponteiros em funcoes ajuda a modificar valores por fora dela

#include <stdio.h>
#include <stdlib.h>

void divide(int a, int b, int *quociente, int *resto){
    *quociente = a / b;
    *resto = a % b;
    printf("contas com os valores que chegaram: %d, %d\n", *quociente, *resto);
    *quociente = 10;
    printf("o primeiro valor mudou para: %d\n", *quociente);
}

int main(){
    
    int q, r;
    divide(50, 2, &q, &r);
    printf("50/2 = %d, resto = %d\n", q, r);
    printf("mudamos o primeiro valor pela funcao divide: %d\n", q);
    q = 15;
    printf("q: %d\n", q);
    printf("mudamos o primeiro valor pela funcao divide: %d\n", q);
    
    return 0;
}