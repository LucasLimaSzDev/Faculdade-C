#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int aux, num, div;
    char continuar;

    do {
        div = 0; 


        printf("\nDigite um n�mero para verificar se � primo: ");
        scanf("%d", &num);


        for (aux = 1; aux <= num; aux++) {
            if (num % aux == 0);
                div++;
        }


        if (div == 2)
            printf("\n� primo\n");
        else
            printf("\nN�o � primo\n");

  
        printf("\nDeseja verificar outro n�mero? (s/n): ");
        scanf("\n %c", &continuar); 

    } while (continuar == 's' || continuar == 'S');

    return 0;
}


