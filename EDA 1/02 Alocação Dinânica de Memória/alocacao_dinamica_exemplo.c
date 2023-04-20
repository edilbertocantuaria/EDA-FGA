#include <stdio.h>
#include <stdlib.h> //Biblioteca de malloc, calloc, free

int main (){
    int *vet1, *vet2; //declaração dos ponteiros

    vet1=(int *) malloc(100*sizeof(int)); //alocação de memória
    vet2=(int *) calloc(100,sizeof(int)); //alocação de memória

    printf("%p\n", vet1); //endereço no heap onde vet1 foi alocado
    printf("%p\n", vet2); //endereço no heap onde vet2 foi alocado

    free(vet1); //desalocação de memória
    free(vet2); //desalocação de memória


return 0;
}
