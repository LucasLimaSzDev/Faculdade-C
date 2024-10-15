#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, i, ehPrimo = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < 2) {
        ehPrimo = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    if (ehPrimo) {
    		system("color 02");
        printf("\n%d é um número primo.\n", num);
    } else {
			system("color 04");
        printf("\n%d não é um número primo.\n", num);
    }

    return 0;
}

