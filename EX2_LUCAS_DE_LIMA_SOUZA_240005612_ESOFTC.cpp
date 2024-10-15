#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    int val, not100, not50, not20, not10, not5, resto;

    printf("Digite um valor para o saque: \n");
    scanf("%d", &val);
   
    not100 = val / 100;
    resto = val % 100;

    not50 = resto / 50;
    resto = resto % 50;

    not20 = resto / 20;
    resto = resto % 20;

    not10 = resto / 10;
    resto = resto % 10;

    not5 = resto / 5;

    printf("Notas: \n");
    printf("100: %d\n", not100);
    printf("50: %d\n", not50);
    printf("20: %d\n", not20);
    printf("10: %d\n", not10);
    printf("5: %d\n", not5);

    return 0;
}

