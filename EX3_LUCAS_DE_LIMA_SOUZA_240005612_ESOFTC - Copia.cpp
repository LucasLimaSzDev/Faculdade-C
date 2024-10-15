#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float sal;
	int aval;
	
	printf("Digite o salário do usuário: ");
	scanf("%f" ,&sal);
	
	printf("\nAvaliação para aplicar o bônus do usuário: \n\nDigite 1 para avaliar como A\nDigite 2 para avaliar como B\nDigite 3 para avaliar como C\n\nInsira o número aqui: ");
	scanf("%d" ,&aval);
	
	switch (aval){
	
	
	case 1:
		
		sal= sal+((sal/100)*15);
		
		printf("\nO salário do usuário agora é R$%.2f reais com um bônus de 15 por cento.\n",sal);
		
	break;
	
	case 2:
		
		sal= sal+((sal/100)*10);
		
		printf("\nO salário do usuário agora é R$%.2f reais com um bônus de 10 por cento.\n",sal);
		
	break;
	
	case 3:
		
		sal= sal+((sal/100)*5);
		
		printf("\nO salário do usuário agora é R$%.2f reais com um bônus de 5 por cento.\n",sal);
		
	break;
	
	}
}
