#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string texto = get_string("digite o texto: ");

    int tamanho = strlen(texto);
    int grade = 0;

    printf ("seu texto tem %i%s",tamanho," letras \n");

    if (tamanho >= 60)
    {
        grade = 3;
    }
    else if (tamanho >= 20)
    {
        grade = 2;
    }
    else if (tamanho >= 0)
    {
        grade = 1;
    }

    printf("seu texto é para a %i%s",grade," serie.");
}