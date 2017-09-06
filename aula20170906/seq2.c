#include <stdio.h>
int main()
{
    float base, altura, area;
    printf("Entre com a base do triangulo:");
    scanf("%f",&base);
    printf("Entre com a altura do triangulo:");
    scanf("%f",&altura);
    area = (base*altura)/2;
    printf("Area do triangulo: %.3f\n", area);
    return 0;
}
