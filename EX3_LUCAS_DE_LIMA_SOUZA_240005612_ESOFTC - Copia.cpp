#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float sal;
	int aval;
	
	printf("Digite o sal�rio do usu�rio: ");
	scanf("%f" ,&sal);
	
	printf("\nAvalia��o para aplicar o b�nus do usu�rio: \n\nDigite 1 para avaliar como A\nDigite 2 para avaliar como B\nDigite 3 para avaliar como C\n\nInsira o n�mero aqui: ");
	scanf("%d" ,&aval);
	
	switch (aval){
	
	
	case 1:
		
		sal= sal+((sal/100)*15);
		
		printf("\nO sal�rio do usu�rio agora � R$%.2f reais com um b�nus de 15 por cento.\n",sal);
		
	break;
	
	case 2:
		
		sal= sal+((sal/100)*10);
		
		printf("\nO sal�rio do usu�rio agora � R$%.2f reais com um b�nus de 10 por cento.\n",sal);
		
	break;
	
	case 3:
		
		sal= sal+((sal/100)*5);
		
		printf("\nO sal�rio do usu�rio agora � R$%.2f reais com um b�nus de 5 por cento.\n",sal);
		
	break;
	
	}
}
