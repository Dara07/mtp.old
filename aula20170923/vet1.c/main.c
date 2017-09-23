#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000

int main()
{
    srand(time(0));
    int numeros[N];
    int i, maximo;
    float media = 0.f;
    printf("Entre com o numero maximo a ser sorteado:");
    scanf("%d", &maximo);
    for(i = 0; i < N; i++)
        numeros[i] = rand()%(maximo+1);
    for(i = 0; i < N; i++)
        media += numeros[i];
    media /= N;
    printf ("A media dos %d numeros: %f\n", N, media);
    return EXIT_SUCCESS;
}
