/*Retorno de Structs em Funções*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int idade;
    float altura;
    char nacionalidade[50];
} Pessoa;

Pessoa SetPessoa(char *nome, int idade, float altura, char *nacionalidade)
{
    Pessoa P;
    strcpy(P.nome, nome);
    P.idade = idade;
    P.altura = altura;
    strcpy(P.nacionalidade, nacionalidade);
    return P; // Retorna a struct contendo os dados passados por parametros
}
void ImprimePessoa(Pessoa P)
{
    printf("\nNome: %s \nIdade: %d \nAltura: %.2f \nNacionalidade: %s", P.nome, P.idade, P.altura, P.nacionalidade);
}

int main()
{
    Pessoa Joao, Maria;

    Joao = SetPessoa("Joao", 15, 1.75, "Brasileiro");
    ImprimePessoa(Joao);

    return 0;
}