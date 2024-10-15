#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    int num, dig, tentativas = 0;

    srand(time(0));
    num = rand() % 100 + 1;

    printf("\nEu escolhi um número entre 1 e 100 para você tentar acertar! Você tem 10 tentativas!\n");

    while (tentativas < 10) {
        printf("\nDigite o seu palpite: ");
        scanf("%d", &dig);

        if (dig == num) {
            printf("Parabéns! Você acertou o número!\n");
            break;
        } else if (dig < num) {
            printf("O número é maior que %d.\n", dig);
        } else {
            printf("O número é menor que %d.\n", dig);
        }

        tentativas++;

        if (tentativas == 10) {
            printf("Você atingiu o limite de tentativas. O número era %d.\n", num);
        }
    }

    return 0;
}

