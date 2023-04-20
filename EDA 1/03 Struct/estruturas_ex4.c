/*Estruturas como Parâmetros*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int idade;
    float altura;
    char nacionalidade[50];
} Pessoa;

void ImprimePessoa(Pessoa P)
{
    printf("\nNome: %s \nIdade: %d \nAltura: %.2f \nNacionalidade: %s \n\n", P.nome, P.idade, P.altura, P.nacionalidade);
}

int main()
{
    Pessoa Joao, P2;
    Pessoa Povo[10];

    /*Conjunto de estruturas*/
    strcpy(Joao.nome, "Joao");
    Joao.idade = 18;
    Joao.altura = 1.78;
    strcpy(Joao.nacionalidade, "Joao");

    strcpy(Povo[4].nome, "Joana");
    Povo[4].idade = 17;
    Povo[4].altura = 1.65;
    strcpy(Povo[4].nacionalidade, "Cearense");

    P2 = Povo[4];

    P2.idade++;

    ImprimePessoa(Joao);

    for (int i = 0; i < 10; i++)
    {
        printf("imprimindo Povo[%d]", i);
        ImprimePessoa(Povo[i]);
        printf("---------------------- \n");
    }

    ImprimePessoa(P2);

    return 0;
}