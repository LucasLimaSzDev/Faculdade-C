#include <stdio.h>
#include <locale.h>

int main () {
	
	
	setlocale(LC_ALL,"portuguese");
	int comp=0,i,res;
	float pseudo;	
	
	do{
	printf("Insira um número para cálcular a média: \n");
	scanf("%d",&i);	
	comp++;
	res = res+i;
	
	} while(comp<=4);

	pseudo = res / 5;
	
	printf("Sua média é: %2.f",pseudo);

	return 0;
}

