#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define tam 10
/*L01B_Ex04.alg – Escreva um algoritmo feito pelo computador que receba o preço de um produto já com o
desconto e o percentual do desconto.
O programa deverá exibir na tela qual era o preço original do produto.*/

int main()
{
    //declarando variaveis
    float preco, descnt, valOrigin;

    //inicializando variaveis
    preco = descnt = valOrigin = 0;

    //recebendo valores

    printf("Digite o valor do preço com desconto...: ");
    fflush(stdin);
    scanf("%f", &preco);

    printf("\n\n\nDigite o valor do desconto.............: ");
    fflush(stdin);
    scanf("%f", &descnt);

    //gerando relatório

    descnt = descnt/100;

    valOrigin = preco/(1-descnt);

    printf("\n\n\n\nO valor original do produto era %.2f reais \n\n\n\n\n", valOrigin);

    printf("\n\n\nFIM DO PROGRAMA!\n\n\n");


    return 0;
}
