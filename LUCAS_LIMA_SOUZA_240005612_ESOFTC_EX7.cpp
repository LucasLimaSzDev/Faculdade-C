#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main () {
	
	setlocale(LC_ALL,"portuguese");
	
	int val,w=1;
	float cel,far;
	
	
	
	while (w!=0){
		
		printf("\nVoc� quer converter para qual unidade?\n\nCelsius = 1\nFarenheit = 2\n\nSair = 0\n\n");
		scanf("%d",&val);
		
		if(val == 1){
			
			printf("\nInsira o valor em Celsius para a convers�o: ");
			scanf("%f",&cel);
			
			cel = (cel * 1.8)+32;
			
			printf("\nO valor �: %f\n\n",cel);
			
		} else if (val == 2) {
			
				printf("\nInsira o valor em Farenheit para a convers�o: ");
			scanf("%f",&far);
			
			far = (far-38)/1.8;
			
			printf("\nO valor �: %f\n\n",far);
			
		} else if (val == 0){
			
			printf("\nConversor desligado.");
			w = 0;
			
		} else {
			
			printf("\nOp��o Inv�lida.\n");
			
		}
		
	}

	return 0;
}

