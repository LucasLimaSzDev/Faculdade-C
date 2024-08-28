		#include <stdio.h>		
		
		int main(){
			
			char nome[100];
			int dia,mes,ano;
					
			printf("Digite seu nome: ");
				scanf("%s",nome);
				
			printf("Digite seu dia de nascimento: ");
				scanf("%d",&dia);
				
			printf("Digite seu mes de nascimento: ");
				scanf("%d",&mes);
				
			printf("Digite seu ano de nascimento: ");
				scanf("%d",&ano);
			
			if(ano%400==0){
				printf("%s nascido em %d / %d / %d sendo um ano bissexto",nome,dia,mes,ano);

			}else{
				printf("%s nascido em %d / %d / %d sendo um ano nao bissexto",nome,dia,mes,ano);
			}


 return 0;
}
