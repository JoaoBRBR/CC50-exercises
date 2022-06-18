#include <cs50.h>
#include <stdio.h>
#include <math.h>

//insira o valor de troco, e te darei
//uma quantidade minima de moedas para o troco.
//as moedas sao de 25, 10, 5 e 1 centavos.

int main(void)
{
    // moedas
    float
    t = 0.0,
    r = 0.0,
    vintecinco = 0.0,
    dez = 0.0,
    cinco = 0.0,
    um = 0.0;
    // ver se esta certo o troco
    while (t <= 0.0)
    {
        t = get_float("Qual Valor do Troco?:  ");
        if (t <= 0.0)
        {
            printf("\ninsira um valor maior do que zero! \n");
        }
    }
    r = t;
    //para vintecinco
    vintecinco = floor(r / 0.25);
    r -= vintecinco * 0.25;

    //para dez
    dez = floor(r / 0.10);
    r -= dez * 0.10;

    //para cinco
    cinco = floor(r / 0.05);
    r -= cinco * 0.05;

    //para um
    um = r / 0.01;
    r -= um * 0.01;

    //mostra valores
    printf("As moedas de troco são: \n");

    if (vintecinco > 0.00)
    {
    printf("%.f", vintecinco);
    printf(" moedas de vintecinco centavos \n");
    }
    if (dez > 0.00)
    {
    printf("%.f", dez);
    printf(" moedas de dez centavos \n");
    }
    if (cinco > 0.00)
    {
    printf("%.f", cinco);
    printf(" moedas de cinco centavos \n");
    }
    if (um > 0.00)
    {
    printf("%.f", um);
    printf(" moedas de um centavo \n");
    }
}