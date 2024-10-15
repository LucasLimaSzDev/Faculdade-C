#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int aux, num, div;
    char continuar;

    do {
        div = 0; 


        printf("\nDigite um número para verificar se é primo: ");
        scanf("%d", &num);


        for (aux = 1; aux <= num; aux++) {
            if (num % aux == 0);
                div++;
        }


        if (div == 2)
            printf("\nÉ primo\n");
        else
            printf("\nNão é primo\n");

  
        printf("\nDeseja verificar outro número? (s/n): ");
        scanf("\n %c", &continuar); 

    } while (continuar == 's' || continuar == 'S');

    return 0;
}


