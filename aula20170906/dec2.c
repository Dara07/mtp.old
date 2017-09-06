#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int numero1, numero2 = 8192, numero3 = 0, numero4, numero5;
    srand (time(0));
    int x = rand()%100;
    int menor = 1328, maior = 1360;
    int y = menor + rand()%(maior-menor+1);
    printf("Coloque um numero divisor de 8192 :");
    scanf("%d",&numero1);
    if(numero2%numero1 == 0)
    {
        numero3 = numero3 + 1;

    }
    printf("\nEscreva o resultado da soma de %d + 101 : ", y);
    scanf("%d",&numero4);
    if(numero4 == (y + 101))
    {
         numero3 = numero3 + 1;

    }
    printf ("\nEscreva o resultado da multiplicacao de %d * 3: ", x);
    scanf("%d",&numero5);
    if(numero5 == (x*3))
    {
       numero3 = numero3 + 1;

    }
    printf("\nSua pontuacao foi: %d", numero3);

    return 0;
}

