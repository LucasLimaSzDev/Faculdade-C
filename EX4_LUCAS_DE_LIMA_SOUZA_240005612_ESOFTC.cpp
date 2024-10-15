#include <stdio.h>
#include <locale.h>
#include <cmath>
#include <stdlib.h>

int main (){
	
	int num,raiz;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um número para verificar se é um quadrado perfeito: \n\n");
	scanf("%d",&num);
	
	raiz = sqrt(num);
	
	if  (raiz * raiz == num){
		
		system("color 02");
		printf("\n%d é um quadrado perfeito!\n",num);
		
	} else {
	
		
		system("color 04");
		printf("\n%d não é um quadrado perfeito!\n",num);
		
	}
	
	return 0;
	
}

