#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define tam 10
/*Elaborar um algoritmo que receba o preço de um produto, calcule e mostre o novo preço, sabendo-
se que ele sofreu um desconto de 15%.*/

int main()
{
    //declarando variaveis
    float precoAtual, novoPreco;
    precoAtual = novoPreco = 0;

    //recebendo dados
    printf("Vamos calcular o desconto do seu produto.\n");
    printf("Digite o preço atual de seu produto...: \n");
    fflush(stdin);
    scanf("%f", &precoAtual);

    //calculando preço
    novoPreco = 0.85 * precoAtual;

    //relatório
    printf("O valor de seu produto com desconto é %.2f reais \n\n\n", novoPreco);

    printf( "!FIM DO PROGRAMA! \n\n\n\n");

    return 0;
}
