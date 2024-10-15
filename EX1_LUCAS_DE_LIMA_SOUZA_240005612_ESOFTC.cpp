#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int d1,d2,d3;
	float val;
	
	printf("Digite o valor para calcular o desconto da compra: ");
		scanf("%f", &val);
	
	if (val <= 100){
		
		system("color 04");
		printf("\nValor R$%.2f. Não há desconto.\n",val);
		
	} else if (val >=100 && val<=500){
		
		val = val-(val/100)*10;
		
		system("color 06");
		printf("\nValor R$%.2f. Com desconto de 10 por cento.\n",val);
			
	}else if (val>500){
		
		val = val-(val/100)*20;
		
		system("color 02");
		printf("\nValor R$%.2f. Com desconto de 20 por cento.\n",val);		
		
	}
	
}
