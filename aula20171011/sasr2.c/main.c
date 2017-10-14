#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i = 1;
void par ()
{
    printf("Os números pares entre 1 e 20 são:\n");
    for (i = 1; i < 21; i++)
    {
        if (i % 2 == 0)
        printf("%d ", i);
        else
        printf("%d ", i);
    }
}

int main ()
{
    int c;
    setlocale(LC_ALL, "portuguese");
    printf("Digite '1' para imprimir os números ímpares entre 1 e 20, e '2' para imprimir os números pares do mesmo intervalo:\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1: parouimpar ();
    break;
    case 2: parouimpar ();
    break;
    default: printf("Opção inválida!");
    break;

    }
    return 0;
}
