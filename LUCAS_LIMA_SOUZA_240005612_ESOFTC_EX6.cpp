#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main () {
	
	setlocale(LC_ALL,"portuguese");
	
	int al,alt,tot;
	float med;
	
	printf("Digite o n�meros de alunos para calcular a m�dia de alturas: ");
	scanf("%d",&al);
	
	for (int comp=0;comp != al;comp++){
		
		printf("Insira a altura do aluno adjacente: ");
		scanf("%d",&alt);
		
		tot = tot + alt;
		
	}
	
	med = tot / al;
	
	printf("A m�dia das alturas �: %2.f",med);

	return 0;
}

