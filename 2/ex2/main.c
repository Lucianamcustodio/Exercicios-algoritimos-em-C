#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define tam 10

/*Elaborar um algoritmo que receba o Nome e ano nascimento de duas pessoas. processar e mostrar:
a) o nome e sua idade de cada um, bem como o ano de nascimento (considerar que ambos já tenham feito
aniversário este ano de 2022);
b) a diferença de idade da primeira pela segunda;*/


int main()
{
    //declarando variveis
    int id_1, id_2, difId, anonasc1, anonasc2;
    char nome_1[20], nome_2[20];

    //inicializando variaveis
    id_1 = id_2 = difId = anonasc1 = anonasc2 = 0;


    //explicando o programa para os usuários
    printf("\n Olá, queremos que você e uma pessoa próxima digitem seus nomes e idades,");
    printf("\n para mostrarmos suas datas de nascimento e a diferença de idade entre vocês.");
    printf ("\n Para isso, responda o questionário abaixo:\n");

//recebendo dados
    printf("\n Primeira Pessoa, digite seu nome.....: ");
    fflush(stdin);
    gets(nome_1);

    printf("\n Primeira Pessoa, digite sua idade...: ");
    fflush(stdin);
    scanf("%d", &id_1);

    printf("\n Segunda Pessoa, digite seu nome.....: ");
    fflush(stdin);
    scanf("%s", &nome_2);

    printf("\n Segunda Pessoa, digite sua idade...: ");
    fflush(stdin);
    scanf("%d", &id_2);
//limpando tela
    system("clear");

//mostrando resultados
    anonasc1 = 2022 - id_1;
    printf("\n Olá, %s, sua idade é %d, e sua data de nascimento é %d . \n", nome_1, id_1, anonasc1);

    anonasc2 = 2022 - id_2;
    printf("\n Olá, %s, sua idade é %d, e sua data de nascimento é %d .\n\n\n\n", nome_2, id_2, anonasc2);

    difId = id_1 - id_2;
    if(difId<0)
        difId = difId * -1;

    printf(" A diferença de idade entre vocês é: %i anos .\n\n\n\n\n", difId);

    printf( "!FIM DO PROGRAMA! \n\n\n\n");

    return 0;
}
