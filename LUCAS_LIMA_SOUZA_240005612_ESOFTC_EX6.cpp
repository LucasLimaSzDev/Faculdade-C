#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main () {
	
	setlocale(LC_ALL,"portuguese");
	
	int al,alt,tot;
	float med;
	
	printf("Digite o números de alunos para calcular a média de alturas: ");
	scanf("%d",&al);
	
	for (int comp=0;comp != al;comp++){
		
		printf("Insira a altura do aluno adjacente: ");
		scanf("%d",&alt);
		
		tot = tot + alt;
		
	}
	
	med = tot / al;
	
	printf("A média das alturas é: %2.f",med);

	return 0;
}

