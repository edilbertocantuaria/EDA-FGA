/*Alocação Dinâmica*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int idade;
    float altura;
    char nacionalidade[50];
} pessoa;

int main()
{
    pessoa *p = (pessoa *)malloc(sizeof(pessoa));

    if (p)
    {
        p->idade = 3;
        printf("idade: %d \n\n", p->idade);
        free(p);
    }

    return 0;
}