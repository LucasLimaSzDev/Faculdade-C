#include <stdio.h>
#include <locale.h>

int main () {
	
	
	setlocale(LC_ALL,"portuguese");
	int comp=0,i,res;
	float pseudo;	
	
	do{
	printf("Insira um n�mero para c�lcular a m�dia: \n");
	scanf("%d",&i);	
	comp++;
	res = res+i;
	
	} while(comp<=4);

	pseudo = res / 5;
	
	printf("Sua m�dia �: %2.f",pseudo);

	return 0;
}

