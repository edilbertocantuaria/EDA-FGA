/*Estruturas - exemplo simples*/

#include <stdio.h>
#include <string.h>

struct Livros
{
    char titulo[50];
    char autor[50];
    char assunto[100];
    int id_livro;
};

int main()
{

    /*Declacrando as variáveis do tipo Livro*/
    struct Livros Livro1, Livro2, Livro3;

    /*Inserindo os dados manualmente*/
    strcpy(Livro1.titulo, "Esturutra de Dados e Algoritmos");
    strcpy(Livro1.autor, "Prof. Nilton");
    strcpy(Livro1.assunto, "Notas de aula  de Esturutra de Dados e Algoritmos 2023-1");
    Livro1.id_livro = 1;

    strcpy(Livro2.titulo, "Algoritmos e Programação de Computadores");
    strcpy(Livro2.autor, "Prof. Fabrilton");
    strcpy(Livro2.assunto, "Notas de aula  de Algoritmos e Programação de Computadores 2023-1");
    Livro2.id_livro = 2;

    printf("------------------------------------\n");
    printf("Dados do Livro 1 \n");
    printf("------------------------------------\n\n");

    printf("Titulo: %s\n", Livro1.titulo);
    printf("Autor: %s\n", Livro1.autor);
    printf("Assunto: %s\n", Livro1.assunto);
    printf("ID do livro: %d\n", Livro1.id_livro);

    printf("------------------------------------\n\n");

    printf("------------------------------------\n");
    printf("Dados do Livro 2 \n");
    printf("------------------------------------\n\n");

    printf("Titulo: %s\n", Livro2.titulo);
    printf("Autor: %s\n", Livro2.autor);
    printf("Assunto: %s\n", Livro2.assunto);
    printf("ID do livro: %d\n", Livro2.id_livro);

    /*Solicitando para o usuário inserir os dados*/
    printf("------------------------------------\n\n");

    printf("Digite o Título do Livro 3: ");
    fgets(Livro3.titulo, 50, stdin);

    printf("\nDigite o autor do Livro 3: ");
    fgets(Livro3.autor, 50, stdin);

    printf("\nDigite o assunto do Livro 3: ");
    fgets(Livro3.assunto, 100, stdin);

    printf("\nDigite o ID do Livro 3: ");
    scanf("%d", &Livro3.id_livro);

    printf("\n\n------------------------------------\n");
    printf("Dados do Livro 3 \n");
    printf("------------------------------------\n\n");

    printf("Titulo: %s\n", Livro3.titulo);
    printf("Autor: %s\n", Livro3.autor);
    printf("Assunto: %s\n", Livro3.assunto);
    printf("ID do livro: %d\n", Livro3.id_livro);

    printf("------------------------------------\n\n");

    return 0;
}