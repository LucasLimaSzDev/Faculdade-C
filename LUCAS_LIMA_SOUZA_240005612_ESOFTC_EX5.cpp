#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main () {
	
	setlocale(LC_ALL,"portuguese");
	
	int adv;
	
		printf("Eu escolhi um número aleatório de 0 a 10 para você adivinhar!\n");
		srand(time(0));
		int val = rand() % 10;
	do {
		

		
		printf("Insira um palpite: ");
		scanf("%d",&adv);
		
		if(adv == val){
			
			printf("Parabéns você acertou!\n");
			
		} else {
			
			printf("Você Errou!\n");
			
		}
		
		
	} while (adv!=val);
	

	return 0;
}

