#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

double x1, x2;

double calculodelta(double f1, double f2, double f3)
{
    return ((f2*f2) - (4 * f1 * f3));
}

void calcularraizes(double f1, double f2 , double f3,double delta)
{
        x1 = ((-1*f2) + sqrt(delta))/ (2*f1);
        x2 = ((-1*f2) - sqrt(delta))/ (2*f1);

}


int main()
{
    double a, b, c, d;
    printf("Informe coeficiente a:\n");
    scanf("%lf", &a);
    printf("Informe coeficiente b:\n");
    scanf("%lf", &b);
    printf("Informe coeficiente c:\n");
    scanf("%lf", &c);
    d = calculodelta(a,b,c);
    calcularraizes(a,b,c,d);

    if(d > 0.0)
    {
        printf("As raizes sao: %lf %lf", x1, x2);
    }else
    if(d == 0)
    {
        printf("a raiz e: %lf", x1);
    }else
    {
        printf("nao ha raiz real");
    }



}
