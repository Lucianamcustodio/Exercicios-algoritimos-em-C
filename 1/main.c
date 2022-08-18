#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

int main()
{
    float num, quadr, raiz, cubo;

    printf("Este é um programa para calcular a raiz, o cubo e o quadrado de um número. \n");
    printf("\n Digite um número qualquer..........: ");
    scanf("%f", &num);

    quadr = pow(num,2);
    cubo = pow(num , 3);
    raiz = sqrt(num);

    printf("\n O quadrado do número digitado é ...: %f \n", quadr);
    printf("\n O cubo do número digitado é .......: %f \n", cubo);
    printf("\n A raiz do número digitado é .......: %f \n", raiz);

    printf("\n FIM DO PROGRAMA \n");

}
