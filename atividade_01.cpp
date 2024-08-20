#include <stdio.h>

int main (){
    int x,y;
        printf("Digite dois numeros inteiros para realizar uma divisao: ");
            scanf("%d %d", &x, &y);
        
        if (!y){

            printf("resultado = %f", (float)(x/y));
            
        } else {

            printf("o valor %d deve ser diferente de 0",y);

        }

return 0;

}