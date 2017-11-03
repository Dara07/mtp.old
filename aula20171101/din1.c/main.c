#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int qtd;
float media(float * numeros, int qtd)
{
    float m = 0.0f;
    int i;
    for ( i = 0; i < qtd; i++) m += numeros[i];
    m /= qtd;
    return m;
}
float desviopadrao( float * numeros, int qtd)
{
    float m = media (numeros, qtd);
    float dp = 0.0f;
    int i;
    for(i = 0; i < qtd; i++) dp += pow(numeros[i]-m, 2);
    dp /= qtd - 1;
    return sqrt(dp);
}
int main()
{
    int qtd, i;
    float * numeros;
    printf("Quantos numeros vc precisa?");
    scanf("%d", &qtd);
    numeros = (float *)malloc(qtd*sizeof(float));
    for(i = 0; i < qtd; i++)
    {
        printf("Entre com %do numero:", i + 1);
        scanf("%f", numeros + i);
    }
    printf("A media dos numeros e: %f\n", media(numeros, qtd));
    printf("O desvio padrão dos numeros e: %f\n", desviopadrao(numeros, qtd));
    free(numeros);
    return 0;
}
