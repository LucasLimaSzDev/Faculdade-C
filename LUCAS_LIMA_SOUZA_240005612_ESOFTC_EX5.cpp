#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main () {
	
	setlocale(LC_ALL,"portuguese");
	
	int adv;
	
		printf("Eu escolhi um n�mero aleat�rio de 0 a 10 para voc� adivinhar!\n");
		srand(time(0));
		int val = rand() % 10;
	do {
		

		
		printf("Insira um palpite: ");
		scanf("%d",&adv);
		
		if(adv == val){
			
			printf("Parab�ns voc� acertou!\n");
			
		} else {
			
			printf("Voc� Errou!\n");
			
		}
		
		
	} while (adv!=val);
	

	return 0;
}

