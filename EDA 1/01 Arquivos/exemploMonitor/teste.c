#include <stdio.h>
#include <stdlib.h>



void cabecalho();

int main(){

int opcao;

printf("Exemplo de como mexer em arquivos utilizando a linguagem c\n\n");

do{
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
            // inserir
            break;

        case 2:
            // excluir - remover
            break;

        case 3:
            // pesquisar pelo nome
            break;

        case 4:
            // listar
            break;

        case 5:
            // listar por uma inicial
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

}while (opcao !=7);



return 0;
}

void cabecalho()
{
    system("clear");

    printf("-----------AGENDA ELETRÔNICA-----------\n");
}
