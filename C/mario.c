#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int h = get_int("qual altura? ");
    int g = 0;
    int p = 2 * h + 1;
    for (int y = 0; y < h; y++)
    {
        g++;
        for (int x = 0; x < p; x++)
        {
            // se antes do buraco
            if (x < h)
            {
                if (x >= h - g)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
            // se no buraco
            else if (x == h)
            {
                printf(" ");
            }
            // se depois do buraco
            else
            {
                if (x < h + g + 1)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}