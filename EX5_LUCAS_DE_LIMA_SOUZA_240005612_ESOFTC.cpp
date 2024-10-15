#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    int num, dig, tentativas = 0;

    srand(time(0));
    num = rand() % 100 + 1;

    printf("\nEu escolhi um n�mero entre 1 e 100 para voc� tentar acertar! Voc� tem 10 tentativas!\n");

    while (tentativas < 10) {
        printf("\nDigite o seu palpite: ");
        scanf("%d", &dig);

        if (dig == num) {
            printf("Parab�ns! Voc� acertou o n�mero!\n");
            break;
        } else if (dig < num) {
            printf("O n�mero � maior que %d.\n", dig);
        } else {
            printf("O n�mero � menor que %d.\n", dig);
        }

        tentativas++;

        if (tentativas == 10) {
            printf("Voc� atingiu o limite de tentativas. O n�mero era %d.\n", num);
        }
    }

    return 0;
}

