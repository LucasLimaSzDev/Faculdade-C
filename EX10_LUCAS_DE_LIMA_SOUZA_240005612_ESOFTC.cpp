#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

	int nota1,nota2,nota3;
	float med;
	
	printf("Digite sua primeira nota: \n\n");
	scanf("%d",&nota1);
	
	printf("\nDigite sua segunda nota: \n\n");
	scanf("%d",&nota2);
	
	printf("\nDigite sua terceira nota: \n\n");
	scanf("%d",&nota3);
	
	med = (nota1+nota2+nota3)/3;
	
	if (med < 60){
		
		system("color 04");
		printf("\nSua m�dia � %.2f. Voc� est� REPROVADO!\n",med);
		
	} else if (med > 60 && med < 69){
		
		system("color 06");
		printf("\nSua m�dia � %.2f. Voc� est� de RECUPERA��O!\n",med);
		
	} else if (med >= 70){
		
		system("color 02");
		printf("\nSua m�dia � %.2f. Voc� est� APROVADO!\n",med);
		
	} 

    return 0;
}

