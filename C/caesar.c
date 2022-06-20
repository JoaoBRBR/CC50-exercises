#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){
    //digite a chave para a decodificação
    int k = 0;
    do
    {
        k = get_int("qual chaave? ");
    }
    while (k < 0 || k >= 26);
    // digite o texto codificado
    string cripto = get_string("qual mensagem? ");

    //interpretação aqui
    for (int i = 0; i < strlen(cripto); i++)
    {
        if (cripto[i] == 'z')
        {
            cripto[i] -= 26;
        }
        cripto[i] += k;
    }

    printf ("a mensagem decodificada é %s", cripto);
}
