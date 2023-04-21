#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} DATA;

typedef struct
{
    char nome[30];
    char fone[30];
    DATA aniv;
} CONTATO;

void inserir();
void listar();
void cabecalho();

int main()
{

    int opcao;

    printf("Exemplo de como mexer em arquivos utilizando a linguagem c\n\n");

    do
    {
        printf("\n\n ------------------------------------------------------ \n\n");
        cabecalho();
        printf("1 - inserir\n");
        printf("2 - excluir\n");
        printf("3 - pesquisar pelo nome\n");
        printf("4 - listar\n");
        printf("5 - listar por uma inicial\n");
        printf("6 - imprimir aniversariantes do mes\n");
        printf("7 - sair\n");

        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            inserir();
            break;

        case 2:
            printf("remover");
            // excluir - remover
            break;

        case 3:
            // pesquisar pelo nome
            break;

        case 4:
            getchar();
            listar();
            break;

        case 5:
            // listar por uma inicial
            printf("testando");
            break;

        case 6:
            // imprimir aniversariante
            break;

        case 7:
            // sair
            break;

        default:
            printf("Opcao invalida! Digite outra opcao!\n\n\n");

            /*scanf("%d", &opcao); // corrigindo o erro de sintaxe
            break;*/
        }

    } while (opcao != 7);

    return 0;
}

void cabecalho()
{
    system("clear");

    printf("-----------AGENDA ELETRÔNICA-----------\n");
}

void inserir()
{
    char confirmacaoSaida = 's';

    CONTATO contato;

    FILE *arquivoGerado;
    arquivoGerado = fopen("agenda.txt", "ab"); // função para abrir um arquivo   - a eh um apend e b eh binario

    if (arquivoGerado == NULL)
    {
        printf("Problemas na abertura do arquivo!! \n\n");
    }
    else
    {
        do
        {
            cabecalho();
            fflush(stdin); // limpar o buffer do teclado

            printf("\nDigite o nome: ");
            scanf("%29s", contato.nome); // usando 29 para deixar espaço para o caractere nulo de término de string

            // fgets(contato.nome, 30, stdin);
            // getchar();

            printf("\nDigite o telefone: ");
            scanf("%29s", contato.fone); // usando 29 para deixar espaço para o caractere nulo de término de string

            // fgets(contato.fone, 30, stdin);
            // getchar();

            printf("\nDigite a data do aniversário: ");
            scanf("%d %d %d", &contato.aniv.dia, &contato.aniv.mes, &contato.aniv.ano);
            // getchar();

            fwrite(&contato, sizeof(CONTATO), 1, arquivoGerado); // comando para permitir que os dados sejam escritos no arquivo!

            printf("\n\nDeseja continuar? (s/n)  ");
            scanf(" %c", &confirmacaoSaida);

        } while (confirmacaoSaida == 's' || confirmacaoSaida == 'S');
    }
    fclose(arquivoGerado); // IMPORTANTE FECHAR O ARQUIVO TODA VEZ QUE O ABRIR!!
}

void listar()
{
    CONTATO contato;

    FILE *arquivoGerado;
    arquivoGerado = fopen("agenda.txt", "r"); // função para ler um arquivo eh binario
    cabecalho();

    if (arquivoGerado == NULL)
    {
        printf("Problemas na abertura do arquivo!! \n\n");
    }
    else
    {
        while (fread(&contato, sizeof(CONTATO), 1, arquivoGerado) == 1)
        {
            printf("\nNome: %s", contato.nome);
            printf("\nTelefone: %s", contato.fone);
            printf("\nData de nascimento: %02d / %02d/ %04d", contato.aniv.dia, contato.aniv.mes, contato.aniv.ano);
            printf("\n ------------------------------------- \n\n");
        }
    }

    fclose(arquivoGerado); // IMPORTANTE FECHAR O ARQUIVO TODA VEZ QUE O ABRIR!!
    printf("Pressione Enter para retornar ao menu principal");
    getchar(); // pausa o programa para o usuario apertar o enter;
}