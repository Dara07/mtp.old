#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int dado()
{
	return rand()%6 + 1;
}

int main()
{
    srand(time(0));
    char enter;
    int i, tentativas = 0, auxiliar, soma;
    setlocale(LC_ALL, "portuguese");
    printf("Pressione enter para jogar o dado:\n");
    do{
        scanf("%c", &enter);
        soma = 0;
        printf("Seus dados são:\n");
        for(i = 1; i < 6; i++)
        {
            auxiliar = dado();
            printf("%d  ", auxiliar);
            soma = soma + auxiliar;
        }
        printf("\nSua soma é:\n" "%d\n", soma);
        if(soma > 18 && soma < 23)
        {
            printf("\nVocê ganhou! <3\n\n\n");
            break;
        }
        tentativas = tentativas + 1;
    }while(tentativas < 3);

    if(tentativas == 3)
    {
        printf("Você perdeu! :P\n\n\n\n");
    }
    return 0;
}
