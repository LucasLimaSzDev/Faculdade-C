#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese"); 
    
    int num1, num2, maior;
    
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num1);
    

    maior = num1;
    
    while (1) {
        printf("\nDigite um outro n�mero inteiro: ");
        scanf("%d", &num2);

        if (num2 > maior) {
            maior = num2;
        }
        
        printf("\nO maior n�mero atual � %d.\n", maior);
        
        if (num2 < 0) {
            break;
        }
    }

    return 0;
}



