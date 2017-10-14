#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

char simbolos[] = ": $ # $ : 4 b . ' :. : $ # $: 4b. ':.";
void linhacoluna(linha, coluna)
{
    int i, j;
    for(i = 0; i < linha; i++)
    {
        for(j = 0; j < coluna; j++)
        {
        printf("%c", simbolos[rand() %37]);
        }
        printf("\n");
    }

}

int main()
{
   srand(time(0));
   int linha, coluna;
   setlocale(LC_ALL, "portuguese");
   while(1){
   printf("Entre com o número de linhas:\n");
   scanf("%d", &linha);
   if(linha>55)
   {
        printf("valor de linha muito alto!\n");
   }else
   {
        break;
   }}
   while(1){
   printf("Entre com o número de colunas;\n");
   scanf("%d", &coluna);
   if(coluna>160)
   {
        printf("valor de coluna muito alto!\n");
   }else
   {
       break;
   }};

   printf("\n\n");
   linhacoluna(linha, coluna);
   return 0;
}
