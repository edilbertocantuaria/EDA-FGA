/*Structs como parâmetro por referência*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char Nome[50];
    int Idade;
    float Altura;
    char Nacionalidade[50];
} Pessoa;

void SetPessoa(Pessoa *P, char *nome, int idade, float altura, char *nacionalidade)
{
    strcpy(P->Nome, nome);
    P->Idade = idade;
    (*P).Altura = altura;
    strcpy(P->Nacionalidade, nacionalidade);
}
void ImprimePessoa(Pessoa P)
{
    printf("\nNome: %s \nIdade: %d \nAltura: %.2f \nNacionalidade: %s", P.Nome, P.Idade, P.Altura, P.Nacionalidade);
}

int main()
{
    Pessoa Maria;
    SetPessoa(&Maria, "Maria", 16, 1.65, "Argentina");
    ImprimePessoa(Maria);

    return 0;
}